class Solution:
    def reconstructQueue(self, people: list[list[int]]) -> list[list[int]]:
        people.sort(key = lambda x: (-x[0], x[1]))
        queue = []
        for p in people:
            queue.insert(p[1], p)   
        return queue
	
	