QT += quick
CONFIG += c++11
QT += sql

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    summoner.cpp \
    summonerdata.cpp \
    itemdata.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    summoner.h \
    summonerdata.h \
    itemdata.h

DISTFILES += \
    item/1001.png \
    item/1004.png \
    item/1006.png \
    item/1011.png \
    item/1026.png \
    item/1027.png \
    item/1028.png \
    item/1029.png \
    item/1031.png \
    item/1033.png \
    item/1036.png \
    item/1037.png \
    item/1038.png \
    item/1039.png \
    item/1041.png \
    item/1042.png \
    item/1043.png \
    item/1051.png \
    item/1052.png \
    item/1053.png \
    item/1054.png \
    item/1055.png \
    item/1056.png \
    item/1057.png \
    item/1058.png \
    item/1082.png \
    item/1083.png \
    item/1400.png \
    item/1401.png \
    item/1402.png \
    item/1412.png \
    item/1413.png \
    item/1414.png \
    item/1416.png \
    item/1419.png \
    item/2003.png \
    item/2004.png \
    item/2009.png \
    item/2010.png \
    item/2011.png \
    item/2012.png \
    item/2013.png \
    item/2015.png \
    item/2031.png \
    item/2032.png \
    item/2033.png \
    item/2047.png \
    item/2050.png \
    item/2051.png \
    item/2052.png \
    item/2053.png \
    item/2054.png \
    item/2055.png \
    item/2056.png \
    item/2057.png \
    item/2058.png \
    item/2059.png \
    item/2060.png \
    item/2061.png \
    item/2062.png \
    item/2065.png \
    item/2138.png \
    item/2139.png \
    item/2140.png \
    item/2319.png \
    item/2403.png \
    item/2419.png \
    item/2420.png \
    item/2421.png \
    item/2422.png \
    item/2423.png \
    item/2424.png \
    item/3001.png \
    item/3003.png \
    item/3004.png \
    item/3006.png \
    item/3007.png \
    item/3008.png \
    item/3009.png \
    item/3010.png \
    item/3020.png \
    item/3022.png \
    item/3024.png \
    item/3025.png \
    item/3026.png \
    item/3027.png \
    item/3028.png \
    item/3029.png \
    item/3030.png \
    item/3031.png \
    item/3033.png \
    item/3035.png \
    item/3036.png \
    item/3040.png \
    item/3041.png \
    item/3042.png \
    item/3043.png \
    item/3044.png \
    item/3046.png \
    item/3047.png \
    item/3048.png \
    item/3050.png \
    item/3052.png \
    item/3053.png \
    item/3056.png \
    item/3057.png \
    item/3060.png \
    item/3065.png \
    item/3067.png \
    item/3068.png \
    item/3069.png \
    item/3070.png \
    item/3071.png \
    item/3072.png \
    item/3073.png \
    item/3074.png \
    item/3075.png \
    item/3076.png \
    item/3077.png \
    item/3078.png \
    item/3082.png \
    item/3083.png \
    item/3084.png \
    item/3085.png \
    item/3086.png \
    item/3087.png \
    item/3089.png \
    item/3090.png \
    item/3091.png \
    item/3092.png \
    item/3094.png \
    item/3095.png \
    item/3096.png \
    item/3097.png \
    item/3098.png \
    item/3100.png \
    item/3101.png \
    item/3102.png \
    item/3104.png \
    item/3105.png \
    item/3107.png \
    item/3108.png \
    item/3109.png \
    item/3110.png \
    item/3111.png \
    item/3112.png \
    item/3113.png \
    item/3114.png \
    item/3115.png \
    item/3116.png \
    item/3117.png \
    item/3122.png \
    item/3123.png \
    item/3124.png \
    item/3133.png \
    item/3134.png \
    item/3135.png \
    item/3136.png \
    item/3137.png \
    item/3139.png \
    item/3140.png \
    item/3142.png \
    item/3143.png \
    item/3144.png \
    item/3145.png \
    item/3146.png \
    item/3147.png \
    item/3151.png \
    item/3152.png \
    item/3153.png \
    item/3155.png \
    item/3156.png \
    item/3157.png \
    item/3158.png \
    item/3165.png \
    item/3170.png \
    item/3174.png \
    item/3175.png \
    item/3181.png \
    item/3184.png \
    item/3187.png \
    item/3190.png \
    item/3191.png \
    item/3193.png \
    item/3194.png \
    item/3196.png \
    item/3197.png \
    item/3198.png \
    item/3200.png \
    item/3211.png \
    item/3222.png \
    item/3252.png \
    item/3285.png \
    item/3301.png \
    item/3302.png \
    item/3303.png \
    item/3304.png \
    item/3305.png \
    item/3306.png \
    item/3307.png \
    item/3308.png \
    item/3309.png \
    item/3310.png \
    item/3311.png \
    item/3312.png \
    item/3340.png \
    item/3345.png \
    item/3348.png \
    item/3361.png \
    item/3362.png \
    item/3363.png \
    item/3364.png \
    item/3371.png \
    item/3373.png \
    item/3374.png \
    item/3379.png \
    item/3380.png \
    item/3382.png \
    item/3383.png \
    item/3384.png \
    item/3385.png \
    item/3386.png \
    item/3400.png \
    item/3401.png \
    item/3410.png \
    item/3416.png \
    item/3422.png \
    item/3455.png \
    item/3460.png \
    item/3461.png \
    item/3462.png \
    item/3504.png \
    item/3508.png \
    item/3512.png \
    item/3513.png \
    item/3599.png \
    item/3630.png \
    item/3631.png \
    item/3633.png \
    item/3634.png \
    item/3635.png \
    item/3636.png \
    item/3637.png \
    item/3640.png \
    item/3641.png \
    item/3642.png \
    item/3643.png \
    item/3645.png \
    item/3647.png \
    item/3648.png \
    item/3649.png \
    item/3671.png \
    item/3672.png \
    item/3673.png \
    item/3675.png \
    item/3680.png \
    item/3681.png \
    item/3682.png \
    item/3683.png \
    item/3690.png \
    item/3691.png \
    item/3692.png \
    item/3693.png \
    item/3694.png \
    item/3695.png \
    item/3706.png \
    item/3715.png \
    item/3742.png \
    item/3748.png \
    item/3751.png \
    item/3800.png \
    item/3801.png \
    item/3802.png \
    item/3812.png \
    item/3814.png \
    item/3901.png \
    item/3902.png \
    item/3903.png \
    item/3905.png \
    item/3907.png \
    item/3916.png \
    item/4001.png \
    item/4003.png \
    item/4004.png \
    item/4010.png
