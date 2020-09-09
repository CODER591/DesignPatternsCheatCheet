#ifndef SINGLETON
#define SINGLETON

/*
 * This class instance should be represented only in one instance.
 */


/*
 * Checklist for the Singleton:
 *
 * Define a private static attribute in the "single instance" class. (instance_)
 * Define a public static accessor function in the class. ( getInstance() )
 * Do "lazy initialization" (creation on first use) in the accessor function. ( global static variable in source file)
 * Define all constructors to be protected or private. (Singleton() is protected)
 * Clients may only use the accessor function to manipulate the Singleton.( getInstance() )
 *
 * */




class Singleton {

    private:
        static Singleton *instance_; // static private class field should be initialized in the source file, not the header one.

    protected:
	Singleton(); //Constuctor is protected to avoid the external initialization. (kind of fool protection)
	             // Singleton should be initialized only by first call of the getInstance()
	             //Also Gang of Four refers to it =)

    public:
	static Singleton* getInstance();
        ~Singleton();
	    //Also some other methods
};

#endif /* SINGLETON */
