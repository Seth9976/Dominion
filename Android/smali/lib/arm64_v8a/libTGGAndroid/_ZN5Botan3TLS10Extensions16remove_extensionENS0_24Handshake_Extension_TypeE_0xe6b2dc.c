// 函数: _ZN5Botan3TLS10Extensions16remove_extensionENS0_24Handshake_Extension_TypeE
// 地址: 0xe6b2dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t** x8 = arg1
std::__ndk1::__tree_node_base<void*>* result = *(arg1 + 8)

if (result == 0)
    return result

int64_t* i_4 = arg1 + 8
int64_t* i = result
int32_t entry_x1

do
    int32_t x11_1 = i[4].d
    
    if (x11_1 s>= entry_x1)
        i_4 = i
    
    i = i[zx.q(x11_1 s< entry_x1 ? 1 : 0)]
while (i != 0)

if (i_4 == arg1 + 8 || i_4[4].d s> entry_x1)
    return 0

int64_t* i_2 = i_4[1]
int64_t* i_3

if (i_2 == 0)
    int64_t** x10_2 = &i_4[2]
    i_3 = *x10_2
    
    if (*i_3 != i_4)
        int64_t* i_1
        
        do
            i_1 = *x10_2
            x10_2 = &i_1[2]
            i_3 = *x10_2
        while (*i_3 != i_1)
else
    do
        i_3 = i_2
        i_2 = *i_2
    while (i_2 != 0)

if (*x8 == i_4)
    *x8 = i_3

x8[2] -= 1
std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(result, i_4)
int64_t* x0_1 = i_4[5]
i_4[5] = 0

if (x0_1 != 0)
    (*(*x0_1 + 0x20))()

operator delete(i_4)
return 1
