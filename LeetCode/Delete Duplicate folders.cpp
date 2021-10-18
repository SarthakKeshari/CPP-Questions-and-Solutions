//https://leetcode.com/problems/delete-duplicate-folders-in-system/

// Q. Two folders (not necessarily on the same level) are identical if they contain the same non-empty set of identical subfolders and underlying subfolder structure. The folders do not need to be at the root level to be identical.
// If two or more folders are identical, then mark the folders as well as all their subfolders.

#include<bits/stdc++.h>
using namespaced std;

class Solution {
	using ull = unsigned long long;

	struct hash_t {
		static constexpr ull base = 31, begin = 27, end = 28;
		ull value, coeff;
		hash_t() : value(0), coeff(1) {}
		hash_t(ull value, ull coeff) : value(value), coeff(coeff) {}
		hash_t(string_view s) : hash_t() {
			for (char c : s)
				aggregate({ ull(c - 'a' + 1), base });
		}
		void aggregate(hash_t that) {
			value = that.coeff * value + that.value;
			coeff *= that.coeff;
		}
	};

	struct folder_t {
		hash_t hash, name_hash;
		vector<string>* path;
		map<ull, folder_t> children;

		void create_folders(vector<vector<string>>& paths) {
			for (auto& path : paths) {
				auto* current = this;
				for (const auto& folder : path) {
					hash_t name_hash{ folder };
					current = &current->children[name_hash.value];
					current->name_hash = name_hash;
				}
				current->path = &path;
			}
			path = nullptr;
		}

		void compute_hashes(unordered_map<ull, int> &hash_to_count) {
			hash.aggregate({ hash_t::begin, hash_t::base });
			for (auto& child : children) {
				child.second.compute_hashes(hash_to_count);
				hash.aggregate(child.second.name_hash);
				hash.aggregate(child.second.hash);
			}
			hash.aggregate({ hash_t::end, hash_t::base });
			if (children.size() != 0)
				++hash_to_count[hash.value];
		}

		void compute_paths(unordered_map<ull, int>& hash_to_count, unordered_set<vector<string>*>& paths_to_keep) {
			if (hash_to_count[hash.value] > 1)
				return;
			if (path != nullptr)
				paths_to_keep.insert(path);
			for (auto& child : children)
				child.second.compute_paths(hash_to_count, paths_to_keep);
		}
	};

int main(){
	vector<vector<string>> deleteDuplicateFolder(vector<vector<string>>& paths) {
		folder_t root;
		unordered_map<ull, int> hash_to_count;
		unordered_set<vector<string>*> paths_to_keep;
		root.create_folders(paths);
		root.compute_hashes(hash_to_count);
		root.compute_paths(hash_to_count, paths_to_keep);
		paths.erase(remove_if(paths.begin(), paths.end(), [&](auto& path) { return paths_to_keep.count(&path) == 0; }), paths.end());
		return paths;
	}
	
}

// Solution By Rajat Jain
