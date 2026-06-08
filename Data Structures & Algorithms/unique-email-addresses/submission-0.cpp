#include <ranges>

class Solution {
public:
    int numUniqueEmails(const vector<string> &emails) {
        std::unordered_set<string> uniqueEmails{};

        for (const std::string_view email : emails) {
            size_t at_it{email.find('@')};
            auto localView{email.substr(0, at_it)};
            auto domainView{email.substr(at_it)};

            auto localClean = localView
                | std::ranges::views::take_while([](char c){ return c != '+'; })
                | std::ranges::views::filter([](char c){return c != '.'; })
                | std::ranges::to<std::string>();

            uniqueEmails.insert(localClean + std::string(domainView));
        }

        return static_cast<int>(uniqueEmails.size());
    }
};