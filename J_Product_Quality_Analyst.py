def main():
    t = int(input())
    for i in range(t):
        n, k = map(int, input().split())
        t = list(map(int, input().split()))
        time = 0
        for j in range(k):
            time += sum(t[:n])
        print("Case {}: {}".format(i + 1, time))

if _name_ == "_main_":
    main()