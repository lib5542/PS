#include <bits/stdc++.h>

using namespace std;

class segment_tree {
public:

    vector<int> seg_arr;
    int floor;
    int height = 0;

    segment_tree(vector<int> &arr) {

        int counter = 1;
        int seg_arr_size = 1;

        while (counter < arr.size()) {
            counter *= 2;
            this->height += 1;
            seg_arr_size += counter;
        }

        this->seg_arr.assign(seg_arr_size+1, 0);
        for (int i = 0; i < arr.size(); i++) {
            seg_arr[i+1] = arr[i];
        }

        int row = pow(2, this->height);
        this->floor = row;

        int idx = row+1;

        for (int h = this->height-1; h >= 0; h--) {
            for (int i = 0; i < row/2; i++) {
                // option
                seg_arr[idx] = seg_arr[idx-row+i] + seg_arr[idx-row+i+1];
                idx++;
            }
            row /= 2;
        }
    }

    void update(int idx, int value) {
        int original = this->seg_arr[idx];
        this->seg_arr[idx] = value;

        int row = this->floor;
        int last_idx = row;

        for (int h = this->height; h > 0; h--) {
            int new_idx;
            if (h == this->height) new_idx = idx + row - (idx/2);
            else new_idx = idx + row - ((idx-last_idx)/2);
            
            int temp = this->seg_arr[new_idx];
            this->seg_arr[new_idx] = this->seg_arr[new_idx] - original + value;
            idx = new_idx;
            if (h != this->height) last_idx += row;

            row /= 2;
            original = temp;
            value = this->seg_arr[new_idx];
        }

    }

    void print() {
        for (int i = 1; i < seg_arr.size(); i++) {
            cout << seg_arr[i] << " ";
        }
        cout << "\n";
    }

};

int main() {
    vector<int> v = {5, 7, 2, 3, 8, 1, 2};
    segment_tree mytree = segment_tree(v);
    mytree.print();

    mytree.update(3, 1000);
    mytree.print();

    return 0;
}