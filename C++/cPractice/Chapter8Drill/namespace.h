#include <iostream>
using namespace std;

namespace X {
	int var;
	class print {
	public:
		print(){
			cout << var << endl;
		}
	};
}

namespace Y {
	int var;
	class print {
	public:
		print(){
			cout << var << endl;
		}
	};
}

namespace Z {
	int var;
	class print {
	public:
		print(){
			cout << var << endl;
		}
	};
}
