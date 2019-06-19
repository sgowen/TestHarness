//
//  UniquenessTest.h
//  PlaygroundCpp
//
//  Created by Stephen Gowen on 11/6/17.
//  Copyright © 2017 Stephen Gowen. All rights reserved.
//

#ifndef UniquenessTest_h
#define UniquenessTest_h

int getNextID()
{
    static int nextID = 0;
    
    return (nextID++ & 65535) << 11;
}

class UniquenessTest
{
public:
    static void test()
    {
        for (int i = 0; i < 65535; ++i)
        {
            int uniqueID = getNextID();
            printf("ID is %d\n", uniqueID);
        }
    }
    
private:
    // ctor, copy ctor, and assignment should be private in a Singleton
    UniquenessTest();
    UniquenessTest(const UniquenessTest&);
    UniquenessTest& operator=(const UniquenessTest&);
};

#endif /* UniquenessTest_h */