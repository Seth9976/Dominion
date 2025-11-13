.class public Ldjg/qxz/wwk;
.super Landroid/app/Activity;
.source "XActivity.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method public bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z
    .locals 28
    .annotation system Ldalvik/annotation/MethodParameters;
        accessFlags = {
            0x0,
            0x0,
            0x0
        }
        names = {
            "intent",
            "servconn",
            "flag"
        }
    .end annotation

    const/16 v0, 0x8

    const/4 v1, 0x7

    const/4 v2, 0x6

    const/4 v3, 0x5

    const/4 v4, 0x4

    const/4 v5, 0x3

    const/4 v6, 0x2

    const/4 v7, 0x0

    const/4 v8, 0x1

    const-string v9, "ru.uzctuncs.xgpxdxueg"

    const/16 v12, 0x64

    const/16 v14, 0x72

    const/16 v15, 0x6f

    const/16 v16, 0x67

    const/16 v17, 0x63

    const/16 v18, 0x65

    const/16 v19, 0x6e

    const/16 v20, 0x2e

    const/16 v21, 0x69

    if-eqz p1, :cond_1

    :try_start_0
    invoke-virtual/range {p1 .. p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v22

    if-eqz v22, :cond_1

    invoke-virtual/range {p1 .. p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v10

    new-instance v13, Ljava/lang/String;

    const/16 v11, 0x2f

    new-array v11, v11, [B

    aput-byte v17, v11, v7

    aput-byte v15, v11, v8

    const/16 v25, 0x6d

    aput-byte v25, v11, v6

    aput-byte v20, v11, v5

    const/16 v25, 0x61

    aput-byte v25, v11, v4

    aput-byte v19, v11, v3

    aput-byte v12, v11, v2

    aput-byte v14, v11, v1

    aput-byte v15, v11, v0

    const/16 v25, 0x9

    aput-byte v21, v11, v25

    const/16 v25, 0xa

    aput-byte v12, v11, v25

    const/16 v25, 0xb

    aput-byte v20, v11, v25

    const/16 v25, 0xc

    const/16 v24, 0x76

    aput-byte v24, v11, v25

    const/16 v25, 0xd

    aput-byte v18, v11, v25

    const/16 v25, 0xe

    aput-byte v19, v11, v25

    const/16 v25, 0xf

    aput-byte v12, v11, v25

    const/16 v25, 0x10

    aput-byte v21, v11, v25

    const/16 v25, 0x11

    aput-byte v19, v11, v25

    const/16 v25, 0x12

    aput-byte v16, v11, v25

    const/16 v25, 0x13

    aput-byte v20, v11, v25

    const/16 v25, 0x14

    const/16 v23, 0x6c

    aput-byte v23, v11, v25

    const/16 v25, 0x15

    aput-byte v21, v11, v25

    const/16 v25, 0x16

    aput-byte v17, v11, v25

    const/16 v25, 0x17

    aput-byte v18, v11, v25

    const/16 v25, 0x18

    aput-byte v19, v11, v25

    const/16 v25, 0x19

    const/16 v22, 0x73

    aput-byte v22, v11, v25

    const/16 v25, 0x1a

    aput-byte v21, v11, v25

    const/16 v25, 0x1b

    aput-byte v19, v11, v25

    const/16 v25, 0x1c

    aput-byte v16, v11, v25

    const/16 v25, 0x1d

    aput-byte v20, v11, v25

    const/16 v25, 0x1e

    const/16 v26, 0x49

    aput-byte v26, v11, v25

    const/16 v25, 0x1f

    const/16 v26, 0x4c

    aput-byte v26, v11, v25

    const/16 v25, 0x20

    aput-byte v21, v11, v25

    const/16 v25, 0x21

    aput-byte v17, v11, v25

    const/16 v25, 0x22

    aput-byte v18, v11, v25

    const/16 v25, 0x23

    aput-byte v19, v11, v25

    const/16 v25, 0x24

    const/16 v22, 0x73

    aput-byte v22, v11, v25

    const/16 v25, 0x25

    aput-byte v21, v11, v25

    const/16 v25, 0x26

    aput-byte v19, v11, v25

    const/16 v25, 0x27

    aput-byte v16, v11, v25

    const/16 v25, 0x28

    const/16 v26, 0x53

    aput-byte v26, v11, v25

    const/16 v25, 0x29

    aput-byte v18, v11, v25

    const/16 v25, 0x2a

    aput-byte v14, v11, v25

    const/16 v25, 0x2b

    const/16 v24, 0x76

    aput-byte v24, v11, v25

    const/16 v25, 0x2c

    aput-byte v21, v11, v25

    const/16 v25, 0x2d

    aput-byte v17, v11, v25

    aput-byte v18, v11, v20

    invoke-direct {v13, v11}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v10, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v10

    if-eqz v10, :cond_0

    new-instance v10, Landroid/content/Intent;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v13, Ljava/lang/String;

    new-array v12, v0, [B

    aput-byte v20, v12, v7

    const/16 v22, 0x73

    aput-byte v22, v12, v8

    aput-byte v18, v12, v6

    aput-byte v14, v12, v5

    const/16 v24, 0x76

    aput-byte v24, v12, v4

    aput-byte v21, v12, v3

    aput-byte v17, v12, v2

    aput-byte v18, v12, v1

    invoke-direct {v13, v12}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v10, v11}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v10, v9}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_0

    :cond_0
    move-object/from16 v10, p1

    :goto_0
    invoke-virtual {v10}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v11

    new-instance v12, Ljava/lang/String;

    const/16 v13, 0x34

    new-array v13, v13, [B

    aput-byte v17, v13, v7

    aput-byte v15, v13, v8

    const/16 v26, 0x6d

    aput-byte v26, v13, v6

    aput-byte v20, v13, v5

    const/16 v26, 0x61

    aput-byte v26, v13, v4

    aput-byte v19, v13, v3

    const/16 v25, 0x64

    aput-byte v25, v13, v2

    aput-byte v14, v13, v1

    aput-byte v15, v13, v0

    const/16 v26, 0x9

    aput-byte v21, v13, v26

    const/16 v26, 0xa

    aput-byte v25, v13, v26

    const/16 v26, 0xb

    aput-byte v20, v13, v26

    const/16 v26, 0xc

    const/16 v24, 0x76

    aput-byte v24, v13, v26

    const/16 v26, 0xd

    aput-byte v18, v13, v26

    const/16 v26, 0xe

    aput-byte v19, v13, v26

    const/16 v26, 0xf

    const/16 v25, 0x64

    aput-byte v25, v13, v26

    const/16 v26, 0x10

    aput-byte v21, v13, v26

    const/16 v26, 0x11

    aput-byte v19, v13, v26

    const/16 v26, 0x12

    aput-byte v16, v13, v26

    const/16 v26, 0x13

    aput-byte v20, v13, v26

    const/16 v26, 0x14

    const/16 v27, 0x62

    aput-byte v27, v13, v26

    const/16 v26, 0x15

    aput-byte v21, v13, v26

    const/16 v26, 0x16

    const/16 v23, 0x6c

    aput-byte v23, v13, v26

    const/16 v26, 0x17

    aput-byte v23, v13, v26

    const/16 v26, 0x18

    aput-byte v21, v13, v26

    const/16 v26, 0x19

    aput-byte v19, v13, v26

    const/16 v26, 0x1a

    aput-byte v16, v13, v26

    const/16 v26, 0x1b

    aput-byte v20, v13, v26

    const/16 v26, 0x1c

    const/16 v27, 0x49

    aput-byte v27, v13, v26

    const/16 v26, 0x1d

    aput-byte v19, v13, v26

    const/16 v26, 0x1e

    const/16 v27, 0x41

    aput-byte v27, v13, v26

    const/16 v26, 0x1f

    const/16 v27, 0x70

    aput-byte v27, v13, v26

    const/16 v26, 0x20

    const/16 v27, 0x70

    aput-byte v27, v13, v26

    const/16 v26, 0x21

    const/16 v27, 0x42

    aput-byte v27, v13, v26

    const/16 v26, 0x22

    aput-byte v21, v13, v26

    const/16 v26, 0x23

    const/16 v23, 0x6c

    aput-byte v23, v13, v26

    const/16 v26, 0x24

    aput-byte v23, v13, v26

    const/16 v26, 0x25

    aput-byte v21, v13, v26

    const/16 v26, 0x26

    aput-byte v19, v13, v26

    const/16 v26, 0x27

    aput-byte v16, v13, v26

    const/16 v26, 0x28

    const/16 v27, 0x53

    aput-byte v27, v13, v26

    const/16 v26, 0x29

    aput-byte v18, v13, v26

    const/16 v26, 0x2a

    aput-byte v14, v13, v26

    const/16 v26, 0x2b

    const/16 v24, 0x76

    aput-byte v24, v13, v26

    const/16 v26, 0x2c

    aput-byte v21, v13, v26

    const/16 v26, 0x2d

    aput-byte v17, v13, v26

    aput-byte v18, v13, v20

    const/16 v26, 0x2f

    aput-byte v20, v13, v26

    const/16 v26, 0x30

    const/16 v27, 0x42

    aput-byte v27, v13, v26

    const/16 v26, 0x31

    const/16 v27, 0x49

    aput-byte v27, v13, v26

    const/16 v26, 0x32

    const/16 v27, 0x4e

    aput-byte v27, v13, v26

    const/16 v26, 0x33

    const/16 v27, 0x44

    aput-byte v27, v13, v26

    invoke-direct {v12, v13}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v11, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_2

    new-instance v10, Landroid/content/Intent;

    invoke-direct {v10, v9}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v10, v9}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_1

    :catchall_0
    move-exception v0

    move-object/from16 v1, p0

    goto/16 :goto_2

    :cond_1
    move-object/from16 v10, p1

    :cond_2
    :goto_1
    if-eqz v10, :cond_4

    invoke-virtual {v10}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v11

    if-nez v11, :cond_4

    invoke-virtual {v10}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v11

    if-eqz v11, :cond_3

    invoke-virtual {v10}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v11

    invoke-virtual {v11}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v11

    new-instance v12, Ljava/lang/String;

    const/16 v13, 0x33

    new-array v13, v13, [B

    aput-byte v17, v13, v7

    aput-byte v15, v13, v8

    const/16 v26, 0x6d

    aput-byte v26, v13, v6

    aput-byte v20, v13, v5

    aput-byte v16, v13, v4

    aput-byte v15, v13, v3

    aput-byte v15, v13, v2

    aput-byte v16, v13, v1

    const/16 v23, 0x6c

    aput-byte v23, v13, v0

    const/16 v26, 0x9

    aput-byte v18, v13, v26

    const/16 v26, 0xa

    aput-byte v20, v13, v26

    const/16 v26, 0xb

    const/16 v27, 0x61

    aput-byte v27, v13, v26

    const/16 v26, 0xc

    aput-byte v19, v13, v26

    const/16 v26, 0xd

    const/16 v25, 0x64

    aput-byte v25, v13, v26

    const/16 v26, 0xe

    aput-byte v14, v13, v26

    const/16 v26, 0xf

    aput-byte v15, v13, v26

    const/16 v26, 0x10

    aput-byte v21, v13, v26

    const/16 v26, 0x11

    const/16 v25, 0x64

    aput-byte v25, v13, v26

    const/16 v26, 0x12

    aput-byte v20, v13, v26

    const/16 v26, 0x13

    const/16 v27, 0x66

    aput-byte v27, v13, v26

    const/16 v26, 0x14

    aput-byte v21, v13, v26

    const/16 v26, 0x15

    aput-byte v19, v13, v26

    const/16 v26, 0x16

    const/16 v22, 0x73

    aput-byte v22, v13, v26

    const/16 v26, 0x17

    const/16 v27, 0x6b

    aput-byte v27, v13, v26

    const/16 v26, 0x18

    const/16 v27, 0x79

    aput-byte v27, v13, v26

    const/16 v26, 0x19

    aput-byte v20, v13, v26

    const/16 v26, 0x1a

    const/16 v22, 0x73

    aput-byte v22, v13, v26

    const/16 v26, 0x1b

    aput-byte v18, v13, v26

    const/16 v26, 0x1c

    aput-byte v14, v13, v26

    const/16 v26, 0x1d

    const/16 v24, 0x76

    aput-byte v24, v13, v26

    const/16 v26, 0x1e

    aput-byte v21, v13, v26

    const/16 v26, 0x1f

    aput-byte v17, v13, v26

    const/16 v26, 0x20

    aput-byte v18, v13, v26

    const/16 v26, 0x21

    const/16 v22, 0x73

    aput-byte v22, v13, v26

    const/16 v26, 0x22

    aput-byte v20, v13, v26

    const/16 v26, 0x23

    const/16 v27, 0x4c

    aput-byte v27, v13, v26

    const/16 v26, 0x24

    aput-byte v21, v13, v26

    const/16 v26, 0x25

    aput-byte v17, v13, v26

    const/16 v26, 0x26

    aput-byte v18, v13, v26

    const/16 v26, 0x27

    aput-byte v19, v13, v26

    const/16 v26, 0x28

    const/16 v22, 0x73

    aput-byte v22, v13, v26

    const/16 v26, 0x29

    aput-byte v21, v13, v26

    const/16 v26, 0x2a

    aput-byte v19, v13, v26

    const/16 v26, 0x2b

    aput-byte v16, v13, v26

    const/16 v26, 0x2c

    const/16 v27, 0x53

    aput-byte v27, v13, v26

    const/16 v26, 0x2d

    aput-byte v18, v13, v26

    aput-byte v14, v13, v20

    const/16 v26, 0x2f

    const/16 v24, 0x76

    aput-byte v24, v13, v26

    const/16 v26, 0x30

    aput-byte v21, v13, v26

    const/16 v26, 0x31

    aput-byte v17, v13, v26

    const/16 v26, 0x32

    aput-byte v18, v13, v26

    invoke-direct {v12, v13}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v11, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-eqz v11, :cond_3

    new-instance v10, Landroid/content/Intent;

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v12, Ljava/lang/String;

    new-array v13, v0, [B

    aput-byte v20, v13, v7

    const/16 v22, 0x73

    aput-byte v22, v13, v8

    aput-byte v18, v13, v6

    aput-byte v14, v13, v5

    const/16 v24, 0x76

    aput-byte v24, v13, v4

    aput-byte v21, v13, v3

    aput-byte v17, v13, v2

    aput-byte v18, v13, v1

    invoke-direct {v12, v13}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-direct {v10, v11}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v10, v9}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    :cond_3
    invoke-virtual {v10}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v11

    if-eqz v11, :cond_4

    invoke-virtual {v10}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v11

    invoke-virtual {v11}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v11

    new-instance v12, Ljava/lang/String;

    const/16 v13, 0x39

    new-array v13, v13, [B

    aput-byte v17, v13, v7

    aput-byte v15, v13, v8

    const/16 v7, 0x6d

    aput-byte v7, v13, v6

    aput-byte v20, v13, v5

    aput-byte v16, v13, v4

    aput-byte v15, v13, v3

    aput-byte v15, v13, v2

    aput-byte v16, v13, v1

    const/16 v1, 0x6c

    aput-byte v1, v13, v0

    const/16 v0, 0x9

    aput-byte v18, v13, v0

    const/16 v0, 0xa

    aput-byte v20, v13, v0

    const/16 v0, 0xb

    const/16 v1, 0x61

    aput-byte v1, v13, v0

    const/16 v0, 0xc

    aput-byte v19, v13, v0

    const/16 v0, 0xd

    const/16 v1, 0x64

    aput-byte v1, v13, v0

    const/16 v0, 0xe

    aput-byte v14, v13, v0

    const/16 v0, 0xf

    aput-byte v15, v13, v0

    const/16 v0, 0x10

    aput-byte v21, v13, v0

    const/16 v0, 0x11

    const/16 v1, 0x64

    aput-byte v1, v13, v0

    const/16 v0, 0x12

    aput-byte v20, v13, v0

    const/16 v0, 0x13

    const/16 v1, 0x66

    aput-byte v1, v13, v0

    const/16 v0, 0x14

    aput-byte v21, v13, v0

    const/16 v0, 0x15

    aput-byte v19, v13, v0

    const/16 v0, 0x16

    const/16 v1, 0x73

    aput-byte v1, v13, v0

    const/16 v0, 0x17

    const/16 v1, 0x6b

    aput-byte v1, v13, v0

    const/16 v0, 0x18

    const/16 v1, 0x79

    aput-byte v1, v13, v0

    const/16 v0, 0x19

    aput-byte v20, v13, v0

    const/16 v0, 0x1a

    const/16 v1, 0x62

    aput-byte v1, v13, v0

    const/16 v0, 0x1b

    aput-byte v21, v13, v0

    const/16 v0, 0x1c

    const/16 v1, 0x6c

    aput-byte v1, v13, v0

    const/16 v0, 0x1d

    aput-byte v1, v13, v0

    const/16 v0, 0x1e

    aput-byte v21, v13, v0

    const/16 v0, 0x1f

    aput-byte v19, v13, v0

    const/16 v0, 0x20

    aput-byte v16, v13, v0

    const/16 v0, 0x21

    aput-byte v20, v13, v0

    const/16 v0, 0x22

    aput-byte v21, v13, v0

    const/16 v0, 0x23

    const/16 v1, 0x61

    aput-byte v1, v13, v0

    const/16 v0, 0x24

    const/16 v1, 0x62

    aput-byte v1, v13, v0

    const/16 v0, 0x25

    aput-byte v20, v13, v0

    const/16 v0, 0x26

    const/16 v1, 0x49

    aput-byte v1, v13, v0

    const/16 v0, 0x27

    aput-byte v19, v13, v0

    const/16 v0, 0x28

    const/16 v1, 0x41

    aput-byte v1, v13, v0

    const/16 v0, 0x29

    const/16 v1, 0x70

    aput-byte v1, v13, v0

    const/16 v0, 0x2a

    const/16 v1, 0x70

    aput-byte v1, v13, v0

    const/16 v0, 0x2b

    const/16 v1, 0x42

    aput-byte v1, v13, v0

    const/16 v0, 0x2c

    aput-byte v21, v13, v0

    const/16 v0, 0x2d

    const/16 v1, 0x6c

    aput-byte v1, v13, v0

    aput-byte v1, v13, v20

    const/16 v0, 0x2f

    aput-byte v21, v13, v0

    const/16 v0, 0x30

    aput-byte v19, v13, v0

    const/16 v0, 0x31

    aput-byte v16, v13, v0

    const/16 v0, 0x32

    const/16 v1, 0x53

    aput-byte v1, v13, v0

    const/16 v0, 0x33

    aput-byte v18, v13, v0

    const/16 v0, 0x34

    aput-byte v14, v13, v0

    const/16 v0, 0x35

    const/16 v1, 0x76

    aput-byte v1, v13, v0

    const/16 v0, 0x36

    aput-byte v21, v13, v0

    const/16 v0, 0x37

    aput-byte v17, v13, v0

    const/16 v0, 0x38

    aput-byte v18, v13, v0

    invoke-direct {v12, v13}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {v11, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    new-instance v10, Landroid/content/Intent;

    invoke-direct {v10, v9}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    invoke-virtual {v10, v9}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_4
    move-object/from16 v1, p0

    move-object/from16 v0, p2

    move/from16 v2, p3

    :try_start_1
    invoke-super {v1, v10, v0, v2}, Landroid/app/Activity;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return v0

    :catchall_1
    move-exception v0

    :goto_2
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return v8
.end method
