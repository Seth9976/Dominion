// 函数: _Z15CardLookupExactPKci
// 地址: 0x9e6f20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = sx.q(arg2)
uint64_t x10 = zx.q(memcrc32(arg1, x20, 0))
int64_t* i = *(*gCardLookup + ((zx.q(*(gCardLookup + 8)) & x10) << 3))

if (i != 0)
    do
        if (i[1].d == arg2 && strncmp(arg1, *i, x20) == 0)
            return &i[2]
        
        i = i[3]
    while (i != 0)

char var_38
XString::XString(&var_38, arg1)
ToLower(&var_38)
int32_t x0_4 = XHashKey(&var_38)
void* i_1

for (i_1 = *(*(gCardLookup + 0x10) + ((zx.q(*(gCardLookup + 0x18)) & zx.q(x0_4)) << 3)); i_1 != 0; 
        i_1 = *(i_1 + 0x10))
    if ((XString::operator!=(&var_38) & 1) == 0)
        i_1 += 8
        break

XString::~XString()
return i_1
