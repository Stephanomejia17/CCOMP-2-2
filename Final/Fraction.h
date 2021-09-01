class Fraction {
    protected:
    int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}
    int n, d;
    public:
        Fraction(int n, int d = 1) : n(n/gcd(n, d)) , d(d/gcd(n,d)) { }
        int num() const {return n;}
        int den() const {return d;}
        Fraction& operator*=(const Fraction& rhs)
        {
            int new_n = n * rhs.n/gcd(n * rhs.n, d * rhs.d);
            d = d * rhs.d/gcd(n*rhs.n, d*rhs.d);
            n = new_n;
            return *this;
        }
        friend std::ostream& operator<<(std::ostream &output, const Fraction &o);
        
        int operator=(const Fraction &o){
            if(n == o.n && d == o.d){
                return 1;
            }
        }
        int operator!=(const Fraction &o){
            if(n != o.n && d != o.d){
                return 0;
            }
        }
        Fraction& operator*(const Fraction o){
            Fraction tmp(0,0);
            tmp.n = n * o.n;
            tmp.d = d * o.d;
            return tmp;
        }
        Fraction& operator*(const int o){
            Fraction tmp(0,0);
            tmp.n = n * o;
            return tmp;
        }


        
};

std::ostream& operator<<(std::ostream &output, const Fraction &o){
    output << o.num() << "/" << o.den() << '\n'; 
}

