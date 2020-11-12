class LinearSearch(object):

    def __init__(self):
        pass

    @staticmethod
    def search(data, target):
        for i in range(len(data)):
            if data[i] == target:
                return i
        return False


if __name__ == "__main__":
    data = [24, 18, 12, 9, 16, 66, 32, 4]

    res1 = LinearSearch.search(data, target=16)
    print(res1)

    res2 = LinearSearch.search(data, target=999)
    print(res2)

