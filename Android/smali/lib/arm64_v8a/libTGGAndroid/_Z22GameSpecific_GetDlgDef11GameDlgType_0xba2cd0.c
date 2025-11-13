// 函数: _Z22GameSpecific_GetDlgDef11GameDlgType
// 地址: 0xba2cd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 s<= 0x7cf)
    uint64_t x8_1 = zx.q(arg1 - 0x1f)
    
    if (x8_1.d u> 0xa)
        if (arg1 == 0x3e8)
            return &data_11509e8
        
        if (arg1 == 0x3e9)
            return &data_1150a20
    else
        switch (x8_1)
            case 0
                return &data_11508d0
            case 4
                return &data_1151158
            case 5
                return &data_1151190
            case 8
                return &data_1150860
            case 9
                return &data_1150898
            case 0xa
                return &data_1150828
else
    uint64_t x8 = zx.q(arg1 - 0x7d0)
    
    if (x8.d u<= 0x28)
        switch (x8)
            case 0
                return &data_1150a58
            case 1
                return &data_1150a90
            case 2
                return &data_1150ac8
            case 3
                return &data_1150b00
            case 4
                return &data_1150b38
            case 5
                return &data_1150b70
            case 6
                return &data_1150ba8
            case 7
                return &data_1150be0
            case 8
                return &data_1150c18
            case 9
                return &data_1150c50
            case 0xa
                return &data_1150c88
            case 0xb
                return &data_1150cc0
            case 0xc
                return &data_1150cf8
            case 0xd
                return &data_1150d30
            case 0xe
                return &data_1150d68
            case 0xf
                return &data_1150da0
            case 0x10
                return &data_1150dd8
            case 0x11
                return &data_1150940
            case 0x13
                return &data_1150908
            case 0x14
                return &data_1150978
            case 0x15
                return &data_11509b0
            case 0x16
                return &data_1150f28
            case 0x17
                return &data_1150f60
            case 0x18
                return &data_11511c8
            case 0x19
                return &data_1151200
            case 0x1a
                return &data_1150e10
            case 0x1b
                return &data_1150e48
            case 0x1c
                return &data_1150e80
            case 0x1d
                return &data_1150f98
            case 0x1e
                return &data_1150fd0
            case 0x1f
                return &data_1151008
            case 0x20
                return &data_1151040
            case 0x21
                return &data_1151078
            case 0x22
                return &data_11510b0
            case 0x23
                return &data_1150eb8
            case 0x24
                return &data_1150ef0
            case 0x25
                return &data_11510e8
            case 0x26
                return &data_1151238
            case 0x27
                return &data_1151270
            case 0x28
                return &data_1151120

int64_t lr
int64_t var_10 = lr
pthread_kill(pthread_self(), 6)
return GameSpecific_GetRulesDefs(XNoReturn()) __tailcall
