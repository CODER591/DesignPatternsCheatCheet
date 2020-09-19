#ifndef PRODUCT_H
#define PRODUCT_H


/*
 * This is file for Product class
 * Lets consider that our Product is complex object
 *
 * lets imagine that our Product is house
 * */

#include <string>
#include <iostream>

class Product {
	private:
		int walls_count_;
		int floors_count_;
		int trees_count_;

	public:
		Product(): walls_count_(0), floors_count_(0), trees_count_(0) {
		    std::cout<<"Product is created"<<std::endl;
		}
		constexpr Product(const Product & var):walls_count_(0),
		                                       floors_count_(0),
						       trees_count_(0) {
                    std::cout<<"Product is copied"<<std::endl;
                    walls_count_ = var.walls_count_;
                    floors_count_ = var.floors_count_;
                    trees_count_ = var.trees_count_;

                }
		Product& operator=(Product&& other) {
			 std::cout<<"Product move assigment"<<std::endl;
			 return *this;
		}

		Product(Product && var) {
			std::cout<<"Product is moved"<<std::endl;
		    walls_count_ = var.walls_count_;
                    floors_count_ = var.floors_count_;
                    trees_count_ = var.trees_count_;
		    var.walls_count_ = 0;
		    var.floors_count_ = 0;
		    var.trees_count_ = 0;

		}
		void buildWall(){
			walls_count_++;
		}
		void buildFloor() {
			floors_count_++;
		}
		void buildTree() {
			trees_count_++;
		}
		void printProduct() {
		   std::cout<<"Count of walls: "<<walls_count_++<<std::endl;
		   std::cout<<"Count of floors count: "<<walls_count_++<<std::endl;
		   std::cout<<"Count of trees count: "<<walls_count_++<<std::endl;
		}
		~Product() {
			std::cout<<"~Product is called"<<std::endl;
		}
};



#endif
