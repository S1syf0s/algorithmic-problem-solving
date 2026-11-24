#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct Room {
   
    int start;
    int end;
    int id;
};

int main() {
    
    int n;
    cin >> n;

    vector<Room> v;
    v.resize(n); 
    vector<int> rooms(n);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int ,int>>> min_heap;
        
    for (int i = 0; i < n; i++) {
        
        Room r;
        cin >> r.start >> r.end;
        r.id = i;
        v[i] = r;
    }
    
    sort(v.begin(), v.end(), [](const Room& a, const Room& b) {
        return a.start < b.start;
    });
    
    int room_number = 1;
    int max_rooms = 1;

    for (int i = 0; i < n; i++) {

        if (min_heap.empty()) {

            min_heap.push({v[i].end, room_number});
            rooms[v[i].id] = room_number;
            continue;
        }
        
        pair<int, int> minimum = min_heap.top();
        
        if (minimum.first == v[i].start) {
            
            room_number++;
            rooms[v[i].id] = room_number;
            min_heap.push({v[i].end, room_number});
        }

        if (minimum.first > v[i].start) {
            
            room_number++;
            rooms[v[i].id] = room_number;
            min_heap.push({v[i].end, room_number});
        }

        if (minimum.first < v[i].start) {
            
            int room = min_heap.top().second;
            rooms[v[i].id] = room;
            min_heap.pop();
            min_heap.push({v[i].end, room});
        }
        
        max_rooms = max(max_rooms, room_number);
    }
    
    if (room_number > max_rooms) {
        max_rooms = room_number;
    }

    cout << max_rooms << endl;
    
    for (int i = 0; i < n; i++) {
        
        cout << rooms[i] << " ";
    }
    
    // Fucking complex stuff...

    return 0;
}
