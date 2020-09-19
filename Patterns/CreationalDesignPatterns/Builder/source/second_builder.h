#ifndef SECOND_BUILDER
#define SECOND_BUILDER

/*
 * Interface to inherit and implement
 *
 *
 * Lets imagine that our Product is consisted of 3 major parts
 *
 * 1) 12 walls
 * 2) 3 floors
 * 3) 20 trees
 */
#include "product.h"
#include "abstract_builder.h"

class SecondBuilder : public AbstractBuilder {
	public:
		SecondBuilder():AbstractBuilder() {
		  std::cout<<"SecondBuilder is called"<<std::endl;
		}
		//building walls
		void buildFirstPart() override {
		    //awful approach I know (it should be isolated)
		    for(int i=0;i<12;i++) {
			 prod_instance_.buildWall();
		    }
		}
		//buld floors
		void buildSecondPart() override {
		    for(int i=0;i<3;i++) {
                        prod_instance_.buildFloor();
                    }
		}
		//build trees
		void buildThirdPart() override {
		    for(int i=0;i<20;i++) {
                        prod_instance_.buildTree();
                    }
		}
		~SecondBuilder() {
			std::cout<<"~SecondBuilder is called"<<std::endl;
		}

};

#endif /* SECOND_BUILDER */
