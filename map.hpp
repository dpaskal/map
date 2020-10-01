#ifndef MAP_MAP_HPP
#define MAP_MAP_HPP

#define DEFAULT_CAPACITY 10

namespace cs540 {
	template <typename key_t, typename mapped_t>
	struct Map {
		// public by default
		typedef std::pair<key_t, mapped_t> val_t;
		size_t _size = 0;
		int i;
		Map() { // constructor
			i = 987654321;
			// _size = 0;
		}
		Map(const Map& copyMap) {
			_size = copyMap._size;
		}
		Map(std::initializer_list<val_t> elems) {
			// _size = 0;
			std::cout << "initializer list constructor: " << std::endl;
			for(auto e: elems) {
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

	}; // struct Map
}

#endif //MAP_MAP_HPP
