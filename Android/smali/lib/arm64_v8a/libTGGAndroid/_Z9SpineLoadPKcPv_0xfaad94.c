// 函数: _Z9SpineLoadPKcPv
// 地址: 0xfaad94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 0x20) = 0
char var_38
XString::XString(&var_38)
XString::operator char const*()
int64_t i = 0
int64_t i_1

do
    i_1 = i
    i = strchr()
while (i != 0)

char var_28

if (i_1 == 0)
    XString::XString(&var_28)
else
    uint64_t x0_2 = XString::operator char const*()
    XString::operator char const*()
    XString::XString(&var_28, x0_2)
XString::~XString()
char* x21_2 = *arg2
int64_t x0_12

if (x21_2 == 0 || zx.d(*x21_2) == 0)
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x18)
    char const* var_40_1 = arg1
    _spAttachmentLoader_init(&var_58, TggAttachmentLoader_dispose, 
        TggAttachmentLoader_createAttachment, TggAttachmentLoader_configureAttachment, 
        TggAttachmentLoader_disposeAttachment)
    
    if (*(arg2 + 0x10) != 0)
        x0_12 = spSkeletonBinary_readSkeletonData(spSkeletonBinary_createWithLoader(&var_58), 
            *(arg2 + 0x10), zx.q(*(arg2 + 0x18)))
    label_faaec8:
        *(arg2 + 0x28) = x0_12
        void* x0_16 = spAnimationStateData_create()
        *(arg2 + 0x30) = x0_16
        *(x0_16 + 8) = 0x3dcccccd
        return XString::~XString()
    
    pthread_kill(pthread_self(), 6)
    XNoReturn()
else
    int64_t x0_10 = spAtlas_create(x21_2, zx.q(strlen(x21_2)), XString::operator char const*(), 0)
    int64_t x8_1 = *(arg2 + 0x10)
    *(arg2 + 0x20) = x0_10
    
    if (x8_1 != 0)
        x0_12 = spSkeletonBinary_readSkeletonData(spSkeletonBinary_create(), *(arg2 + 0x10), 
            zx.q(*(arg2 + 0x18)))
        goto label_faaec8
pthread_kill(pthread_self(), 6)
int64_t* x0_20 = XNoReturn()
XString::~XString()
sub_1101e04(x0_20)
noreturn
