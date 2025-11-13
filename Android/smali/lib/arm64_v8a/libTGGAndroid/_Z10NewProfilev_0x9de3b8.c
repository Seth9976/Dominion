// 函数: _Z10NewProfilev
// 地址: 0x9de3b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *(gGameSettings + 0x10)
int64_t x24 = sx.q(*(x23 + 0x1f2e0))
GameProfile* result = x23 + x24 * 0x7cb8
*(x23 + 0x1f2e0) = x24.d + 1
memset(result, 0, 0x7cb8)
GameProfile::GameProfile()
char var_80 = RandomInt(gRNG, 0x1a) + 0x41
char var_7f = RandomInt(gRNG, 0x1a) + 0x41
char var_7e = RandomInt(gRNG, 0x1a) + 0x41
char var_7d = RandomInt(gRNG, 0x1a) + 0x41
char var_7c = RandomInt(gRNG, 0x1a) + 0x41
char var_7b = RandomInt(gRNG, 0x1a) + 0x41
char var_7a = RandomInt(gRNG, 0x1a) + 0x41
char var_79 = RandomInt(gRNG, 0x1a) + 0x41
char var_78 = RandomInt(gRNG, 0x1a) + 0x41
char var_77 = RandomInt(gRNG, 0x1a) + 0x41
char var_76 = RandomInt(gRNG, 0x1a) + 0x41
char var_75 = RandomInt(gRNG, 0x1a) + 0x41
char var_74 = RandomInt(gRNG, 0x1a) + 0x41
char var_73 = RandomInt(gRNG, 0x1a) + 0x41
char var_72 = RandomInt(gRNG, 0x1a) + 0x41
char var_71 = RandomInt(gRNG, 0x1a) + 0x41
char var_70 = RandomInt(gRNG, 0x1a) + 0x41
char var_6f = RandomInt(gRNG, 0x1a) + 0x41
char var_6e = RandomInt(gRNG, 0x1a) + 0x41
char var_6d = RandomInt(gRNG, 0x1a) + 0x41
char var_6c = RandomInt(gRNG, 0x1a) + 0x41
char var_6b = RandomInt(gRNG, 0x1a) + 0x41
char var_6a = RandomInt(gRNG, 0x1a) + 0x41
char var_68 = 0
char var_69 = RandomInt(gRNG, 0x1a) + 0x41
XString::operator=(result + 0x42a0)
*(result + 0x42a8) = 0
*(result + 0x42c0) = 0
*(result + 0x5748) = 0
XString::operator=(result + 0x42b0)
XString::operator=(result + 0x4298)
int32_t i = 0

do
    int64_t x9_1 = *(result + 0x7590)
    uint64_t i_8 = zx.q(i)
    void* j_8 = *(x9_1 + (zx.q(i) << 3))
    
    if (j_8 != 0)
        void* j
        
        do
            j = *(j_8 + 8)
            XPooledFree(j_8, 0x10)
            j_8 = j
        while (j != 0)
        x9_1 = *(result + 0x7590)
    
    *(x9_1 + (i_8 << 3)) = 0
    i = i_8.d + 1
while (i u<= *(result + 0x7598))

void* x9_3 = x23 + x24 * 0x7cb8
int32_t i_1 = 0
*(x9_3 + 0x759c) = 0

do
    int64_t x9_4 = *(x9_3 + 0x7580)
    uint64_t i_13 = zx.q(i_1)
    void* j_9 = *(x9_4 + (zx.q(i_1) << 3))
    
    if (j_9 != 0)
        void* j_1
        
        do
            j_1 = *(j_9 + 8)
            XPooledFree(j_9, 0x10)
            j_9 = j_1
        while (j_1 != 0)
        x9_4 = *(x9_3 + 0x7580)
    
    *(x9_4 + (i_13 << 3)) = 0
    i_1 = i_13.d + 1
while (i_1 u<= *(x9_3 + 0x7588))

void* x9_6 = x23 + x24 * 0x7cb8
int32_t i_2 = 0
*(x9_6 + 0x758c) = 0

do
    int64_t x9_7 = *(x9_6 + 0x7740)
    uint64_t i_14 = zx.q(i_2)
    void* j_10 = *(x9_7 + (zx.q(i_2) << 3))
    
    if (j_10 != 0)
        void* j_2
        
        do
            j_2 = *(j_10 + 0x20)
            XPooledFree(j_10, 0x28)
            j_10 = j_2
        while (j_2 != 0)
        x9_7 = *(x9_6 + 0x7740)
    
    *(x9_7 + (i_14 << 3)) = 0
    i_2 = i_14.d + 1
while (i_2 u<= *(x9_6 + 0x7748))

void* x9_9 = x23 + x24 * 0x7cb8
int32_t i_3 = 0
*(x9_9 + 0x774c) = 0

do
    int64_t x9_10 = *(x9_9 + 0x7730)
    uint64_t i_15 = zx.q(i_3)
    void* j_11 = *(x9_10 + (zx.q(i_3) << 3))
    
    if (j_11 != 0)
        void* j_3
        
        do
            j_3 = *(j_11 + 0x10)
            XPooledFree(j_11, 0x18)
            j_11 = j_3
        while (j_3 != 0)
        x9_10 = *(x9_9 + 0x7730)
    
    *(x9_10 + (i_15 << 3)) = 0
    i_3 = i_15.d + 1
while (i_3 u<= *(x9_9 + 0x7738))

int32_t i_4 = 0
*(x23 + x24 * 0x7cb8 + 0x773c) = 0

do
    int64_t x9_13 = *(result + 0x7590)
    uint64_t i_12 = zx.q(i_4)
    void* j_12 = *(x9_13 + (zx.q(i_4) << 3))
    
    if (j_12 != 0)
        void* j_4
        
        do
            j_4 = *(j_12 + 8)
            XPooledFree(j_12, 0x10)
            j_12 = j_4
        while (j_4 != 0)
        x9_13 = *(result + 0x7590)
    
    *(x9_13 + (i_12 << 3)) = 0
    i_4 = i_12.d + 1
while (i_4 u<= *(result + 0x7598))

void* x9_15 = x23 + x24 * 0x7cb8
int32_t i_5 = 0
*(x9_3 + 0x759c) = 0

do
    int64_t x9_16 = *(x9_15 + 0x5750)
    uint64_t i_9 = zx.q(i_5)
    void* j_13 = *(x9_16 + (zx.q(i_5) << 3))
    
    if (j_13 != 0)
        void* j_5
        
        do
            j_5 = *(j_13 + 8)
            XPooledFree(j_13, 0x10)
            j_13 = j_5
        while (j_5 != 0)
        x9_16 = *(x9_15 + 0x5750)
    
    *(x9_16 + (i_9 << 3)) = 0
    i_5 = i_9.d + 1
while (i_5 u<= *(x9_15 + 0x5758))

void* x9_18 = x23 + x24 * 0x7cb8
int32_t i_6 = 0
*(x9_18 + 0x575c) = 0

do
    int64_t x9_19 = *(x9_18 + 0x42f8)
    uint64_t i_10 = zx.q(i_6)
    void* j_14 = *(x9_19 + (zx.q(i_6) << 3))
    
    if (j_14 != 0)
        void* j_6
        
        do
            j_6 = *(j_14 + 0x10)
            XPooledFree(j_14, 0x18)
            j_14 = j_6
        while (j_6 != 0)
        x9_19 = *(x9_18 + 0x42f8)
    
    *(x9_19 + (i_10 << 3)) = 0
    i_6 = i_10.d + 1
while (i_6 u<= *(x9_18 + 0x4300))

void* x9_21 = x23 + x24 * 0x7cb8
int32_t i_7 = 0
*(x9_21 + 0x4304) = 0

do
    int64_t x9_22 = *(x9_21 + 0x4308)
    uint64_t i_11 = zx.q(i_7)
    void* j_15 = *(x9_22 + (zx.q(i_7) << 3))
    
    if (j_15 != 0)
        void* j_7
        
        do
            j_7 = *(j_15 + 0x18)
            XPooledFree(j_15, 0x20)
            j_15 = j_7
        while (j_7 != 0)
        x9_22 = *(x9_21 + 0x4308)
    
    *(x9_22 + (i_11 << 3)) = 0
    i_7 = i_11.d + 1
while (i_7 u<= *(x9_21 + 0x4310))

void* x23_1 = x23 + x24 * 0x7cb8
*(x23_1 + 0x4314) = 0
*(x23_1 + 0x4318) = 0
*(x23_1 + 0x78a0) = 0
*(x23_1 + 0x5960) = 0
*(x23_1 + 0x6454) = 0
*(x23_1 + 0x6f48) = 0
*(x23_1 + 0x6f50) = 0
*(x23_1 + 0x7558) = 0
*(x23_1 + 0x75a0) = 2
*(x23_1 + 0x7568) = 0x200000002
char var_88
XString::XString(&var_88)
XString::operator=(result)
int32_t x0_55 = RandomAvatar()
*(x23_1 + 0x11e8) = 4
*(x23_1 + 0x10) = x0_55
__builtin_memset(x23_1 + 0x42c8, 0, 0x30)
int32_t x8_25 = *(x23 + 0x1f2e8)
*(x23 + 0x1f2e8) = x8_25 + 1
*(x23_1 + 0x4320) = x8_25
*(*(gGameSettings + 0x10) + 0x1f2e4) = x8_25
SyncedDataSetAccount(x23_1 + 0x42f8)
*(x23_1 + 0x78a0) = 0
ProfileVerifyEntitlements(result)
LocalGameExists(true)
XString::~XString()
return result
