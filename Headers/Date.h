#ifndef __DATE_H__
#define __DATE_H__


/**
* @class Date
* class for saving date by 3 unsigned numbers
* input, print methods to work with class in console
* methods fin/fout takes data from/to file
* can be constructed empty or with 3 unsigned in arguments (day, month, year)
*/
class Date {

    public:
        unsigned day, month, year; /// < Day 1..31, Month 1..12, year 1900..2100

        virtual void input(); /// Input Date by console
        virtual void print(); /// Print Date in console

        /**
        Input Date from file
        @arg fname - const char* - name of the input file
        @return 1 in the case of success, of error otherwise
        **/
        virtual int fin(const char* fname);

        /**
        Write Date to file
        @arg fname - const char* - name of file to write
        @return 1 in the case of success, of error otherwise
        **/
        virtual int fout(const char* fname);

        Date(unsigned d, unsigned m , unsigned y);
        Date();
        ~Date();
};


#endif // __DATA_H__
