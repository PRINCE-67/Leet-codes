class Solution {
public:
    bool sm(char c) {
        return c >= 'a' && c <= 'z'
    }
    bool cl(char c) {
        return c >= 'A' && c <= 'Z'
    }
    bool nn(char c) {
        return c >= '0' && c <= '9'
    }

    int strongPasswordChecker(string password) {
        int n = password.size();
        if (!n) return 6;



        int tt = 0;
        int cnt = 1;
        int cl = 0;
        int nn = 0;
        int sl = 0;

        for (int i = 0; i < n; i++) {
            if (password[i] >= 'A' && password[i] <= 'Z')
                cl++;
            else if (password[i] >= '0' && password[i] <= '9') {
                nn++;
            }
            else if (password[i] >= 'a' && password[i] <= 'z') sl++;
        }

        if (n >= 6 && (cl > 0 && nn > 0 && sl > 0))
            return 0;



        for (int i = 1; i < n; i++) {

            if (cnt == 3) {
                if (n < 6 && (sl == 0 || nn == 0 || cl == 0)) {
                    tt++;
                }

                cnt = 1;
                if (sl == 0 || nn == 0 || cl == 0) {
                    if (sl == 0) {
                        tt++;
                        n++;
                        sl++;
                    }
                    if (nn == 0) {
                        tt++;
                        n++;
                        nn++;
                    }
                    if (cl == 0) {
                        tt++;
                        n++;
                        cl++;
                    }
                }
                else if () {
                    tt++;
                    cnt = 1;
                }
            }
            if (password[i] == password[i - 1])
                cnt++;
        }
        if (n < 6) tt += 6 - n;
        return tt;
    }
};