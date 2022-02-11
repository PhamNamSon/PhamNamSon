for (i = v; i >= 0; i--) {
        if (i == v) {
            river_map[a[v - 1]] = 1;
            v = a[v - 1];
            continue;
        }
        river_map[i] = 0;
    }
