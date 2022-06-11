## oracle 数据备份恢复命令：

 1. 备份

    > exp userid='sys/zzsoft@orcl as sysdba' file='E:\数据库资料\szcg_20190403.dmp' owner=(szcg) log='E:\数据库资料\szcglog0403.log'

 2. 恢复

    > imp 'sys/123456 as sysdba' file=E:\szcg_20190314.dmp   full=y ignore=y

