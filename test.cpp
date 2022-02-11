while (u != 0) {
        if (river_map[a[u - 1]] >= 1) {
            k = a[u - 1];
            break;
        }
        u = a[u - 1];
    }
