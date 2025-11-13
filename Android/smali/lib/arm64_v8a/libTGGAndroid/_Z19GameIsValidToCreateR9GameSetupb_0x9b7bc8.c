// 函数: _Z19GameIsValidToCreateR9GameSetupb
// 地址: 0x9b7bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_4 = *(arg1 + 0x60)
int32_t x8 = 0
int32_t x9
int32_t x10_1
int32_t x11

if (x9_4 s<= 0x3e7)
    if (x9_4 == 1)
        goto label_9b7c28
    
    if (x9_4 == 2)
        x8 = 0
        x10_1 = 0
        x9 = *(arg1 + 0x64) == 0 ? 1 : 0
        x11 = *(arg1 + 0x28c)
        
        if (x11 s<= 0x3e7)
            goto label_9b7c40
        
        goto label_9b7c90
    
    x9 = 0
    x10_1 = 0
    
    if (x9_4 != 3)
        goto label_9b7c34
    
    x8 = 0
    x9 = 0
    x10_1 = 1
    x11 = *(arg1 + 0x28c)
    
    if (x11 s<= 0x3e7)
        goto label_9b7c40
    
    goto label_9b7c90

x9 = 0
x10_1 = 0

if (x9_4 - 0x3e8 u> 1)
    goto label_9b7c34

label_9b7c28:
x9 = 0
x10_1 = 0
x8 = 1
label_9b7c34:
x11 = *(arg1 + 0x28c)
int32_t x11_1

if (x11 s<= 0x3e7)
label_9b7c40:
    
    if (x11 == 1)
        goto label_9b7c98
    
    if (x11 == 2)
        if (*(arg1 + 0x290) == 0)
            x9 += 1
        
        x11_1 = *(arg1 + 0x4b8)
        
        if (x11_1 s<= 0x3e7)
            goto label_9b7ca8
        
        goto label_9b7cf0
    
    if (x11 != 3)
        goto label_9b7c9c
    
    x10_1 += 1
    x11_1 = *(arg1 + 0x4b8)
    
    if (x11_1 s<= 0x3e7)
        goto label_9b7ca8
    
    goto label_9b7cf0

label_9b7c90:

if (x11 - 0x3e8 u>= 2)
    goto label_9b7c9c

label_9b7c98:
x8 += 1
label_9b7c9c:
x11_1 = *(arg1 + 0x4b8)
int32_t x11_3

if (x11_1 s<= 0x3e7)
label_9b7ca8:
    
    if (x11_1 == 1)
        goto label_9b7cf8
    
    if (x11_1 == 2)
        if (*(arg1 + 0x4bc) == 0)
            x9 += 1
        
        x11_3 = *(arg1 + 0x6e4)
        
        if (x11_3 s<= 0x3e7)
            goto label_9b7d08
        
        goto label_9b7d50
    
    if (x11_1 != 3)
        goto label_9b7cfc
    
    x10_1 += 1
    x11_3 = *(arg1 + 0x6e4)
    
    if (x11_3 s<= 0x3e7)
        goto label_9b7d08
    
    goto label_9b7d50

label_9b7cf0:

if (x11_1 - 0x3e8 u>= 2)
    goto label_9b7cfc

label_9b7cf8:
x8 += 1
label_9b7cfc:
x11_3 = *(arg1 + 0x6e4)
int32_t x11_6

if (x11_3 s<= 0x3e7)
label_9b7d08:
    
    if (x11_3 == 1)
        goto label_9b7d58
    
    if (x11_3 == 2)
        if (*(arg1 + 0x6e8) == 0)
            x9 += 1
        
        x11_6 = *(arg1 + 0x910)
        
        if (x11_6 s<= 0x3e7)
            goto label_9b7d68
        
        goto label_9b7db0
    
    if (x11_3 != 3)
        goto label_9b7d5c
    
    x10_1 += 1
    x11_6 = *(arg1 + 0x910)
    
    if (x11_6 s<= 0x3e7)
        goto label_9b7d68
    
    goto label_9b7db0

label_9b7d50:

if (x11_3 - 0x3e8 u>= 2)
    goto label_9b7d5c

label_9b7d58:
x8 += 1
label_9b7d5c:
x11_6 = *(arg1 + 0x910)
int32_t x11_9

if (x11_6 s<= 0x3e7)
label_9b7d68:
    
    if (x11_6 == 1)
        goto label_9b7db8
    
    if (x11_6 == 2)
        if (*(arg1 + 0x914) == 0)
            x9 += 1
        
        x11_9 = *(arg1 + 0xb3c)
        
        if (x11_9 s<= 0x3e7)
            goto label_9b7dc8
        
        goto label_9b7e10
    
    if (x11_6 != 3)
        goto label_9b7dbc
    
    x10_1 += 1
    x11_9 = *(arg1 + 0xb3c)
    
    if (x11_9 s<= 0x3e7)
        goto label_9b7dc8
    
    goto label_9b7e10

label_9b7db0:

if (x11_6 - 0x3e8 u>= 2)
    goto label_9b7dbc

label_9b7db8:
x8 += 1
label_9b7dbc:
x11_9 = *(arg1 + 0xb3c)
int32_t x11_12

if (x11_9 s<= 0x3e7)
label_9b7dc8:
    
    if (x11_9 == 1)
        goto label_9b7e18
    
    if (x11_9 == 2)
        if (*(arg1 + 0xb40) == 0)
            x9 += 1
        
        x11_12 = *(arg1 + 0xd68)
        
        if (x11_12 s<= 0x3e7)
            goto label_9b7e28
        
        goto label_9b7e70
    
    if (x11_9 != 3)
        goto label_9b7e1c
    
    x10_1 += 1
    x11_12 = *(arg1 + 0xd68)
    
    if (x11_12 s<= 0x3e7)
        goto label_9b7e28
    
    goto label_9b7e70

label_9b7e10:

if (x11_9 - 0x3e8 u>= 2)
    goto label_9b7e1c

label_9b7e18:
x8 += 1
label_9b7e1c:
x11_12 = *(arg1 + 0xd68)
int32_t x11_15

if (x11_12 s<= 0x3e7)
label_9b7e28:
    
    if (x11_12 == 1)
        goto label_9b7e78
    
    if (x11_12 == 2)
        if (*(arg1 + 0xd6c) == 0)
            x9 += 1
        
        x11_15 = *(arg1 + 0xf94)
        
        if (x11_15 s<= 0x3e7)
            goto label_9b7e88
        
        goto label_9b7ec4
    
    if (x11_12 != 3)
        goto label_9b7e7c
    
    x10_1 += 1
    x11_15 = *(arg1 + 0xf94)
    
    if (x11_15 s<= 0x3e7)
        goto label_9b7e88
    
    goto label_9b7ec4

label_9b7e70:

if (x11_12 - 0x3e8 u>= 2)
    goto label_9b7e7c

label_9b7e78:
x8 += 1
label_9b7e7c:
x11_15 = *(arg1 + 0xf94)

if (x11_15 s> 0x3e7)
label_9b7ec4:
    
    if (x11_15 - 0x3e8 u< 2)
        x8 += 1
else
label_9b7e88:
    
    if (x11_15 == 1)
        x8 += 1
    else if (x11_15 == 2)
        if (*(arg1 + 0xf98) == 0)
            x9 += 1
    else if (x11_15 == 3)
        x10_1 += 1

int32_t x9_3

if ((arg2.d & 1) != 0)
    x9_3 = x9
else
    x9_3 = x10_1

return zx.q(x9_3 + x8 s> 1 ? 1 : 0)
