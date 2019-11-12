package com.huatec.hiot_cloud.core.test;
import com.huatec.hiot_cloud.core.dao.UserDao;
import com.huatec.hiot_cloud.core.entity.User;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.test.context.ContextConfiguration;
import org.springframework.test.context.junit4.SpringJUnit4ClassRunner;
import java.util.Date;
@RunWith(SpringJUnit4ClassRunner.class)
@ContextConfiguration(locations = {"classpath:applicationContext.xml"})
public class UserDaoTest {
    //自动装载
    @Autowired
    private UserDao userDao;

    /* 测试查找所有用户 */
    @Test
    public void testFindAll() {
        System.out.println(userDao.findAll());
        System.out.println(userDao.findAll() == null ? "测试失败" : "测试成功");
    }

    /*注册新用户*/
    @Test
    public void testsaveForRegister() {
        User user = new User();
        user.setId("123");
        user.setEmail("078945567@qq.com");
        user.setPassword("123123");
        user.setPhone("17600561234");
        user.setUsername("krystal");
        user.setImg("123123");
        user.setIs_active(32);
        user.setIs_developer(12);
        user.setIs_staff(23);
        user.setIs_superuser(11);
        user.setDate_joined(new Date());
        user.setLastlogin(new Date());
        System.out.println(userDao.saveForRegister(user));
    }
    /* 根据id修改用户密码*/
    @Test
    public void testupdatePassword(){
        User user = userDao.findById("123");
        System.out.println("修改前的userPassword："+user.getPassword());
        userDao.updatePassword("123","222111");
        user = userDao.findById("123");
        System.out.println("修改后的userPassword："+user.getPassword());
    }
    /* 根据id删除用户 */
    @Test
	public void testDelete(){
        User user = userDao.findById("85825656");
        System.out.println(user);
        int res = userDao.detele("85825656");
        user = userDao.findById("85825656");
        System.out.println(user);
    }

}
