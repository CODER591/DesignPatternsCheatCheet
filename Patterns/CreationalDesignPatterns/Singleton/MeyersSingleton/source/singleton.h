#ifndef SINGLETON
#define SINGLETON

/*
 * This class instance should be represented only in one instance.
 */


/*
 * This example of Meyers Singleton. It is completely threadsafe for initialization.
 * Why?
 *
 * That is guaranteed by the standard:
 *
 *
 * Static variables with block scope will be created exactly once.
 * */


class Singleton{
	public:
		static Singleton& getInstance(){
			static Singleton instance;
			return instance;
		}
	private:
		Singleton() = default;
		~Singleton() = default;
		Singleton(const Singleton&)= delete;
		Singleton& operator=(const Singleton&)= delete;

};






#endif /* SINGLETON */
