#include <string>
#include <vector>

class Intruso{
    /*Continue a implementação da classe Intruso*/
    private:

        std::vector<std::string> _numbers;
        std::vector<std::string> _letters;

    public:

        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};