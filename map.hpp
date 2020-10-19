#ifndef MAP_MAP_HPP
#define MAP_MAP_HPP

#define DEFAULT_CAPACITY 10

namespace cs540 {
	template <typename K, typename V>
	struct node {
		private:
			K key;
			V value;
			node* next;
		public:
			// constructor
			node() {};
			node(const K *key, const V *value) : key(key), value(value), next(NULL) {}

			K		getKey	() const		{ return key; }
			V		getValue() const		{ return value; }
			void	setValue(V val)			{ node::value = val; }
			void	setNext	(node* next)	{ node::next = next; }
	};

	template <typename K, typename V>
	struct Map {
		private:
			node<K, V> *table;
		public:
			typedef std::pair<K, V> val_t;
			size_t _size = 0;
			Map() {		// constructor
				table = new node<K, V>[DEFAULT_CAPACITY]();
			}
			Map(const Map& copyMap) {
				_size = copyMap._size;
			}
			Map(std::initializer_list<val_t> elems) {
				std::cout << "initializer list constructor: " << std::endl;
				for(val_t e: elems) {
					++_size;
					std::cout << e.first << " " << e.second << std::endl;
				}
			}
			~Map() {	// destructor
				;
			}
				
			size_t size() {
				return _size;
			}
			bool empty() {
				return _size == 0;
			}

	}; // struct Map
}

#endif //MAP_MAP_HPP
