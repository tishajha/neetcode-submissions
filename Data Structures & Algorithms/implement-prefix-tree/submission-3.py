class TrieNode:
    def __init__ (self):
        self.children = {}
        self.endOfWord= False

class PrefixTree:

    def __init__(self):
        self.root = TrieNode()
        

    def insert(self, word: str) -> None:
        curr = self.root
        for c in word:
            if c not in curr.children:
                curr.children[c]= TrieNode()
            curr = curr.children[c]
        curr.endOfWord=True

    def findNode(self, word: str) :
        curr = self.root
        for c in word:
            if c not in curr.children:
                return None
            curr = curr.children[c]
        return curr




    def search(self, word: str) -> bool:
        node = self.findNode(word)
        return node is not None and node.endOfWord
        

    def startsWith(self, prefix: str) -> bool:
        
        return self.findNode(prefix) is not None