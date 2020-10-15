#ifndef MAP_MAP_HPP
#define MAP_MAP_HPP

#define DEFAULT_CAPACITY 10

namespace cs540 {
	template <typename key_t, typename mapped_t>
	struct Map {
		// public by default
		typedef std::pair<key_t, mapped_t> val_t;
		size_t _size = 0;
		Map() {		// constructor
			;
		}
		Map(const Map& copyMap) {
			_size = copyMap._size;
		}
		Map(std::initializer_list<val_t> elems) {
			std::cout << "initializer list constructor: " << std::endl;
			for(val_t e: elems) {
				_size++;
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
