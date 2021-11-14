#ifndef __DATE_H__
#define __DATE_H__


/**
* @class Date
* class for saving date by 3 unsigned numbers;
* input, print methods to work with class in console;
* methods fin/fout takes data from/to file;
* can be constructed empty or with 3 unsigned in arguments (day, month, year);
*/
class Date {

    public:
        unsigned day, month, year;

        void input();
        void print();
        int fin(const char* fname);
        int fout(const char* fname);

        Date(unsigned d, unsigned m , unsigned y);
        Date();
        ~Date();
};


#endif // __DATA_H__
