#ifndef FIRST_BUILDER
#define FIRST_BUILDER

/*
 *
 *
 *
 * Lets imagine that our Product is consisted of 3 major parts
 *
 * 1) 8 walls
 * 2) 2 floors
 * 3) 5 trees
 */
#include "product.h"
#include "abstract_builder.h"

class FirstBuilder : public AbstractBuilder {
	public:
		FirstBuilder():AbstractBuilder() {
			std::cout<<"FirstBuilder is called"<<std::endl;
		}
		//building walls
		void buildFirstPart() override {
			//awful approach i know(it should be isolated)
			for(int i=0;i<8;i++) {
			prod_instance_.buildWall();
			}
		}
		//buld floors
		void buildSecondPart() override {
		    for(int i=0;i<2;i++) {
                        prod_instance_.buildFloor();
                    }
		}
		//build trees
		void buildThirdPart() override {
		    for(int i=0;i<5;i++) {
                        prod_instance_.buildTree();
                    }
		}
		~FirstBuilder() {
			std::cout<<"~FirstBuilder is called"<<std::endl;
		}

};

#endif /* FIRST_BUILDER */
