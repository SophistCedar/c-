
#include <iostream>
#include <list>
#include <forward_list>
#include <vector>
#include <queue>
#include <ctime>
#include <array>
#include <string>
#include <deque>
using namespace std;
char e[10000000];
array<char, 10000000> f;
int main(int argc, char *argv[])
{
    decltype(clock()) beg;
    int Index[] = {10, 1000, 100000, 10000000};
    for (const auto &MaxIndex : Index)
    {
        vector<char> a, as(MaxIndex);
        list<char> b1, b2;
        forward_list<char> c;
        queue<char> d;
        string g;
        deque<char> h1, h2;
        printf("MaxIndex: %d\n", MaxIndex);

        beg = clock();
        for (int i = 1; i <= MaxIndex; ++i)
            a.push_back('a');
        printf("vector insert: %ld ms\n", clock() - beg);

        beg = clock();
        for (int i = 0; i < MaxIndex; ++i)
            as[i] = 'a';
        printf("vector(Array) insert: %ld ms\n", clock() - beg);

        beg = clock();
        for (int i = 1; i <= MaxIndex; ++i)
            g.push_back('a');
        printf("String insert: %ld ms\n", clock() - beg);

        beg = clock();
        for (int i = 1; i <= MaxIndex; ++i)
            b1.push_back('a');
        printf("list insert(back): %ld ms\n", clock() - beg);

        beg = clock();
        for (int i = 1; i <= MaxIndex; ++i)
            b1.push_front('a');
        printf("list insert(front): %ld ms\n", clock() - beg);

        beg = clock();
        for (int i = 1; i <= MaxIndex; ++i)
            c.push_front('a');
        printf("forward_list insert(front): %ld ms\n", clock() - beg);

        beg = clock();
        for (int i = 1; i <= MaxIndex; ++i)
            d.push('a');
        printf("queue insert: %ld ms\n", clock() - beg);

        beg = clock();
        for (int i = 1; i <= MaxIndex; ++i)
            h1.push_back('a');
        printf("deque insert(back): %ld ms\n", clock() - beg);

        beg = clock();
        for (int i = 1; i <= MaxIndex; ++i)
            h2.push_back('a');
        printf("deque insert(front): %ld ms\n", clock() - beg);

        beg = clock();
        for (int i = 0; i < MaxIndex; ++i)
            e[i] = 'a';
        printf("InterArray insert: %ld ms\n", clock() - beg);

        beg = clock();
        for (int i = 0; i < MaxIndex; ++i)
            f[i] = 'a';
        printf("Array insert: %ld ms\n\n", clock() - beg);

        if (MaxIndex == 10000000)
        {
            int temp;
            beg = clock();
            for (const auto &i : a)
                temp = i;
            printf("vector rangefor: %ld ms\n", clock() - beg);
            beg = clock();
            for (const auto &i : g)
                temp = i;
            printf("string rangefor: %ld ms\n", clock() - beg);
            beg = clock();
            for (const auto &i : b1)
                temp = i;
            printf("list rangefor: %ld ms\n", clock() - beg);
            beg = clock();
            for (const auto &i : c)
                temp = i;
            printf("forward_list rangefor: %ld ms\n", clock() - beg);
            beg = clock();
            for (const auto &i : h1)
                temp = i;
            printf("deque rangefor: %ld ms\n", clock() - beg);
            beg = clock();
            for (const auto &i : e)
                temp = i;
            printf("InterArray rangefor: %ld ms\n", clock() - beg);
            beg = clock();
            for (const auto &i : f)
                temp = i;
            printf("Array rangefor: %ld ms\n\n", clock() - beg);
            beg = clock();
            for (int i = 0; i < MaxIndex; i += 50)
                temp = a[i];
            printf("vector random: %ld ms\n", clock() - beg);
            beg = clock();
            for (int i = 0; i < MaxIndex; i += 50)
                temp = g[i];
            printf("string random: %ld ms\n", clock() - beg);
            beg = clock();
            for (int i = 0; i < MaxIndex; i += 50)
                temp = h1[i];
            printf("deque random: %ld ms\n", clock() - beg);
            beg = clock();
            for (int i = 0; i < MaxIndex; i += 50)
                temp = e[i];
            printf("InterArray random: %ld ms\n", clock() - beg);
            beg = clock();
            for (int i = 0; i < MaxIndex; i += 50)
                temp = f[i];
            printf("Array random: %ld ms\n\n", clock() - beg);
        }
    }
    return EXIT_SUCCESS;
}