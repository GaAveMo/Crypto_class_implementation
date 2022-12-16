#include "RLE.h"
#include "Crypto.h"

string RLE::dchange()
{
    char a[8] = { 'a','b','c','d','e','f','g','h'};
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        int k = 1;
        while (s[i] == s[i + 1] && i < s.length() - 1) {
            k++;
            i++;
        }
        char c = a[k];
        result = result + s[i];
        result = result + c;
    }
    return result;

}

string RLE::nchange()
{
    char a[8] = { 'a','b','c','d','e','f','g','h'};
    string d = dchange();
    string result = "";
    int k, l = 0;
    for (int i = 0; i < d.length(); i = i + 2) {
        k = 0;
        while (a) {
            if (d[i + 1] == a[k]) {
                l = k;
                break;
            }
            k++;
        }
        while (l) {
            result = result + d[i];
            l--;
        }
    }
    return result;
}
