int firstBadVersion(int n) {
        int st = 1;
        int end = n;
        int mid = 0;
        int bad = 0;
        while(st<=end) {
            mid = st + (end - st) / 2;
            if(isBadVersion(mid) == false) {
                st = mid + 1;
            } else {
                bad = mid;
                end = mid - 1;
            }
        }
        return bad;
    }
