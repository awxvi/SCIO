#include <fstream>
#include <string>

namespace scio {
    class io {
        public:
            void tofile( std::string toWrite, std::string filename ) {
                std::ofstream ostream;
                ostream.open( filename );
                ostream << toWrite;
                ostream.close();
            }

            std::string readFile( std::string filename ) {
                std::ifstream istream;
                istream.open( filename );

                std::string writeTo;

                while ( getline( istream, writeTo ) )

                istream.close();

                return writeTo;
            }
    };
}