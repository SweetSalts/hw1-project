#!/bin/sh
echo "当前路径"
pwd
echo "初始化环境变量"
sh ${SYS_ROOT}/env_android26.sh
echo"环境变量初始化完成"

#编译cmakeList.txt
echo"开始编译cmakeList"
cmake ${SYS_ROOT}/src/service
make
echo"编译cmakeList成功"

#编译android代码
echo"开始编译apk"
${SYS_ROOT}/src/BinderIPC/gradlew
echo"编译apk成功"

#拷贝apk到dist
cp {SYS_ROOT}/src/BinderIPC/app/build/outputs/apk/app-debug.apk {SYS_ROOT}/dist
