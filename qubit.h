using namespace std;


class Qubit {

    public:

        Qubit();
        Qubit(long double alpha, long double beta);
        void printQubit();
        void printVector();
        Qubit applyHadamard();

        void setAlpha(long double a);
        void setBeta(long double b);
        void setAB(long double a, long double b);



    private:
        
        //recall a qubit is represented by ψ = α|0> + ß|1>
        long double alpha;
        long double beta;

        bool verifyQubit(long double a, long double b) const;



} ;
