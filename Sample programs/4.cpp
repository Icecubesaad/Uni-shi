#include <iostream>
#include <fstream>
using namespace std;

void vowelwords()
{
    char sentence_to_be_written[100] = {};
    char sentence[100] = {};
    int help = 0;
    ifstream file_in("FIRST.txt");
    file_in.getline(sentence, 100);
    file_in.close();
    ofstream file_out("SECOND.txt");
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if ((sentence[i] >= 'a' && sentence[i] <= 'z' && sentence[i] != ' ') || i == 0)
        {
            if (sentence[i-1] != ' ' && i>0)
            {
                continue;
            }
            else
            {
                if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
                {
                    for (int adding = i; sentence[adding] != ' ' && sentence[adding] != '\0'; adding++)
                    {
                        sentence_to_be_written[help] = sentence[adding];
                        help++;
                    }
                    sentence_to_be_written[help] = ' ';
                    help++;
                }
            }
        }
    }
    sentence_to_be_written[help-1] = '\0'; // Add null terminator to sentence_to_be_written
    cout << sentence_to_be_written << endl;
    file_out.write(sentence_to_be_written, help-1);
    file_out.close();
}

int main()
{
    vowelwords();
    return 0;
}
