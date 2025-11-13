// 函数: sub_523730
// 地址: 0x523730
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int128_t var_20
__builtin_memcpy(&var_20, 
    "\x1e\x07\x00\x00\x1c\x07\x00\x00\x1b\x07\x00\x00\x1a\x07\x00\x00\x1d\x07\x00\x00\x19\x07\x00\x00", 
    0x18)
int128_t* esi = &var_20
int32_t i_1

if (*(*(sub_573400() + 4) + 0xd38) s< 3)
    i_1 = 6
else
    int128_t var_e0
    esi = &var_e0
    __builtin_memcpy(&var_e0, 
        "\x1e\x07\x00\x00\x1e\x07\x00\x00\x1c\x07\x00\x00\x1c\x07\x00\x00\x1b\x07\x00\x00\x1b\x07\x00\x"
    "00\x1a\x07\x00\x00\x1a\x07\x00\x00\x1d\x07\x00\x00\x1d\x07\x00\x00\x19\x07\x00\x00\x19\x07\x00"
    "00", 
        0x30)
    i_1 = 0xc

void* result = sub_573400()
void* esi_2 = esi + (i_1 << 2) - 4
void* ebx = result + 4
int32_t i

do
    result = sub_5727e0(result, *esi_2, *ebx, arg1, 0xffffffff, nullptr)
    esi_2 -= 4
    i = i_1
    i_1 -= 1
while (i != 1)
CookieCheckFunction(result)
return result
