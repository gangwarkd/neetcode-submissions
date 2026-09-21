class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
   
        set<string> uniqueEmails;

        for (string email : emails) {
            string local = "";
            string domain = "";

            int at = email.find('@');

            // Get local name
            for (int i = 0; i < at; i++) {
                if (email[i] == '+')
                    break;

                if (email[i] != '.')
                    local += email[i];
            }

            // Get domain name
            domain = email.substr(at + 1);

            // Combine normalized email
            uniqueEmails.insert(local + "@" + domain);
        }

        return uniqueEmails.size();
    
    }
};