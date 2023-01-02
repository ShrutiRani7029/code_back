bool isAdditiveNumber(string num) {
        for (int i = 1; i < num.length() - 1; ++ i){
            long long n1 = stol(num.substr(0, i));
            if(to_string(n1) != num.substr(0, i))
                break;
            for(int j = i+1; j < num.length(); ++j){
                long long n2 = stol(num.substr(i, j-i));
                if(to_string(n2) != num.substr(i, j-i))
                    break;
                bool found = find_rec(n1, n2, num.substr(j), false);
                if(found)
                    return true;
            }
        }
        return false;
    }
