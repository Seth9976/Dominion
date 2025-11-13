// 函数: _Z14CardTypeDefGet11DomCardType
// 地址: 0xb36ed8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 s< &data_800000)
    if (arg1 s> 0xfff)
        switch (arg1)
            case 0x1000
                return &data_1149e40
            case 0x2000
                return &data_1149e50
            case 0x4000
                return &data_1149e60
            case 0x8000
                return &data_1149e70
            case 0x10000
                return &data_1149e80
            case 0x20000
                return &data_1149e90
            case 0x40000
                return &data_1149ea0
            case 0x80000
                return &data_1149eb0
            case 0x100000
                return &data_1149ec0
            case 0x200000
                return &data_1149ed0
            case &__elf_header
                return &data_1149ee0
    else if (arg1 s<= 0x3f)
        if (arg1 - 2 u<= 0x1e)
            switch (&jump_table_7eed7f[3 + arg1])
                case &jump_table_7eed84
                    return &data_1149d90
                case &jump_table_7eed84[2]
                    return &data_1149da0
                case &jump_table_7eed84[6]
                    return &data_1149db0
                case &jump_table_7eed84[0xe]
                    return &data_1149dc0
                case &jump_table_7eed84[0x1e]
                    return &data_1149dd0
    else
        switch (arg1)
            case 0x40
                return &data_1149de0
            case 0x80
                return &data_1149df0
            case 0x100
                return &data_1149e00
            case 0x200
                return &data_1149e10
            case 0x400
                return &data_1149e20
            case 0x800
                return &data_1149e30
else
    switch (arg1)
        case 0x1000000
            return &data_1149f00
        case 0x2000000
            return &data_1149f10
        case 0x4000000
            return &data_1149f20
        case 0x8000000
            return &data_1149f30
        case 0x10000000
            return &data_1149f40
        case 0x20000000
            return &data_1149f50
        case 0x40000000
            return &data_1149f60
        case 0x80000000
            return &data_1149f70
        case 0x100000000
            return &data_1149f80
        case 0x200000000
            return &data_1149f90
        case 0x400000000
            return &data_1149fa0
        case 0x800000000
            return &data_1149fb0
        case 0x1000000000
            return &data_1149fc0
        case 0x2000000000
            return &data_1149fd0
        case 0x4000000000
            return &data_1149fe0
        case 0x8000000000
            return &data_1149ff0
        case 0x10000000000
            return &data_114a000
        case 0x20000000000
            return &data_114a010
        case 0x40000000000
            return &data_114a020
        case 0x80000000000
            return &data_114a030
        case 0x100000000000
            return &data_114a040
        case 0x400000000000
            return &data_114a050
        case &data_800000
            return &data_1149ef0

int64_t lr
int64_t var_10 = lr
pthread_kill(pthread_self(), 6)
int64_t x0_45
bool x1
x0_45, x1 = XNoReturn()
return CardTypeIndivString(x0_45, x1) __tailcall
