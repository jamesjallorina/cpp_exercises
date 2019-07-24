#include <iostream>


class functional
{
	private:
	void private_function() { std::cout << "private function \n"; }

	protected:
	void protected_function() { std::cout << "protected function \n"; }

	public:
	void public_function() { std::cout << "public function \n"; }

};


int main( int argc , char ** argv)
{
	functional p;

	p.public_function();
	p.private_function();
	p.protected_function();

	return 0;
	
}
