
package studentrigistration;


import com.sun.jdi.connect.spi.Connection;
import java.awt.Color;
import java.awt.Container;
import java.awt.Cursor;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;


public class LoginFrame extends JFrame {
    private Container c,c2;
    private Font f ,f2;
    private JLabel  label,label2,login;
    private JTextField usertf;
    private JPasswordField  pf;
    private JButton clearB,LoginB;
    private Cursor cursor,cursor1;
    LoginFrame(){
        
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setBounds(100,50,1000,650 );
        this.setTitle("LoginFrame");
        
        
       componants();
    }
    public void componants(){
        
        c=this.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.MAGENTA);
        
        f= new Font("Arial",Font.BOLD,18);
        
        f2= new Font("Arial",Font.BOLD,28);
        
        login=new JLabel ("LOGIN  IN");
        login.setBounds(430,150,200,50);
        login.setForeground(Color.BLUE);
        login.setFont(f2);
        c.add(login);
        
        
        label=new JLabel("Username:");
        label.setBounds(350,250,100,30);
        label.setFont(f);
        c.add(label);
        
        usertf=new JTextField();
        usertf.setBounds(470,250,150,30);
        usertf.setFont(f);
        c.add(usertf);
        
       
         label2=new JLabel("Password:");
         label2.setBounds(350,300,100,30);
         label2.setFont(f);
         c.add(label2);
         
       pf = new JPasswordField();
       pf.setBounds(470,300,150,30);
       pf.setFont(f);
       pf.setEchoChar('*');
       c.add(pf);
       
       
       clearB=new JButton("Clear");
       clearB.setBounds(350,380,100,30);
       clearB.setBackground(Color.PINK);
       clearB.setFont(f);
       cursor=new Cursor(Cursor.HAND_CURSOR);
       clearB.setCursor(cursor);
       c.add(clearB);
       
       LoginB=new JButton("Login");
       LoginB.setBounds(500,380,100,30);
       LoginB.setBackground(Color.PINK);
       LoginB.setFont(f);
       cursor1=new Cursor(Cursor.HAND_CURSOR);
       LoginB.setCursor(cursor1);
       c.add(LoginB);
       
        
      
         clearB.addActionListener(new ActionListener(){
             public void actionPerformed(ActionEvent e){
                 usertf.setText("");
                 pf.setText("");
                 
             }
         });
         
         
         LoginB.addActionListener(new ActionListener(){
             @Override
             public void actionPerformed(ActionEvent e){
               String userName= usertf.getText();
               String password=pf.getText();
               
               if(userName.equals("miadul") && password.equals("1234")){
                // JOptionPane.showMessageDialog(null,"Insert Successfully.");
                 
               
               dispose();
               StudentTable obj=new StudentTable();
               obj.setVisible(true);
                
                 
                 
               }
               else{
                   JOptionPane.showMessageDialog(null,"Invalid Usser password Or Username.");
               }
               
               
                 
             }
         });
         
        
        
        
        
        
    }
    public static void main(String[] args) throws ClassNotFoundException, SQLException {
        LoginFrame frame = new LoginFrame();
         frame.setVisible(true);
        
        
        
        
       
    }
   // jdbc:mysql://localhost:3307/mysql?zeroDateTimeBehavior=CONVERT_TO_NULL [root on Default schema]
    
}
