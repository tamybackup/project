package com.huatec.hiot_cloud.core.dao;
import com.huatec.hiot_cloud.core.entity.User;
import org.apache.ibatis.annotations.Param;
import org.springframework.stereotype.Repository;
import java.util.List;
/**
@ Created by liwenqiang on 2017/5/2 0002.
@ Description:
*/
@Repository
public interface UserDao {
    /*保存新用户注册信息*/
    public int saveForRegister(User user);
    /*根据用户ID查询用户信息*/
    public User findById(String id);
    /*查询所有用户*/
    public List<User> findAll();
    /*修改用户密码*/
    public int updatePassword(@Param("id") String id, @Param("password") String password);
    /*根据用户id删除用户*/
    public int detele(String id);
}
