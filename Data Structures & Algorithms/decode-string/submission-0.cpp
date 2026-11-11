class Solution {
public:
    string decodeString(string s) {
        
        

                    stack<int> numStack;
                            stack<string> strStack;

                                    string curr = "";
                                            int num = 0;

                                                    for (char ch : s) {

                                                                // If character is a digit
                                                                            if (isdigit(ch)) {
                                                                                            num = num * 10 + (ch - '0');
                                                                                                        }

                                                                                                                    // If opening bracket
                                                                                                                                else if (ch == '[') {
                                                                                                                                                numStack.push(num);
                                                                                                                                                                strStack.push(curr);

                                                                                                                                                                                num = 0;
                                                                                                                                                                                                curr = "";
                                                                                                                                                                                                            }

                                                                                                                                                                                                                        // If closing bracket
                                                                                                                                                                                                                                    else if (ch == ']') {

                                                                                                                                                                                                                                                    int k = numStack.top();
                                                                                                                                                                                                                                                                    numStack.pop();

                                                                                                                                                                                                                                                                                    string prev = strStack.top();
                                                                                                                                                                                                                                                                                                    strStack.pop();

                                                                                                                                                                                                                                                                                                                    string temp = "";

                                                                                                                                                                                                                                                                                                                                    // Repeat current string k times
                                                                                                                                                                                                                                                                                                                                                    for (int i = 0; i < k; i++) {
                                                                                                                                                                                                                                                                                                                                                                        temp += curr;
                                                                                                                                                                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                                                                                                                                                                                        curr = prev + temp;
                                                                                                                                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                                                                                                                                                // If alphabet character
                                                                                                                                                                                                                                                                                                                                                                                                                                            else {
                                                                                                                                                                                                                                                                                                                                                                                                                                                            curr += ch;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        return curr;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            };

    