
package studentrigistration;

import java.awt.Color;
import java.awt.Container;
import java.awt.Cursor;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.sql.*;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.table.DefaultTableModel;
public class StudentTable extends JFrame implements ActionListener {
    private JTable table;
    private JScrollPane scroll;
    private DefaultTableModel model;
    
    private Container c;
    private Font f,f2;
    private JLabel titleLabel,snLabel,siLabel,spLable,couLable,InLabel;
    private JTextField sntf,sitf,sptf,coutf;
    private JButton addButton,updateButton,deleteButton,clearButton;
    
    private String[] columns= {"Student ID","Student Name","Mobile Phone","Course"};
    private String [] rows= new String[4];
    
     private Cursor cursor,cursor1,cursor2,cursor13;
    StudentTable(){
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(1200,700);
        this.setTitle("Student Table");
        
        initComponents();
    }
    void initComponents(){
      
       
        c=this.getContentPane();
        c.setLayout(null);
        c.setBackground(Color.LIGHT_GRAY);
        
        f=new Font("Arial",Font.BOLD,16);
        f2=new Font("Arial",Font.BOLD,28);
        
        titleLabel=new JLabel("Student Registration");
        titleLabel.setFont(f2);
        titleLabel.setForeground(Color.BLUE);
        titleLabel.setBounds(300,10,400,50);
        c.add(titleLabel);
        
        snLabel=new JLabel("Student Name:");
        snLabel.setFont(f);
        snLabel.setBounds(50,100,200,30);
        c.add(snLabel);
        
        sntf=new JTextField();
        sntf.setBounds(210,100,160,30);
        sntf.setFont(f);
        c.add(sntf);
        
        siLabel=new JLabel("Student ID:");
        siLabel.setFont(f);
        siLabel.setBounds(50,170,200,30);
        c.add(siLabel);
        
        sitf=new JTextField();
        sitf.setFont(f);
        sitf.setBounds(210,170,160,30);
        c.add(sitf);
        
       spLable=new JLabel("Mobile Phone:");
       spLable.setFont(f);
       spLable.setBounds(50,240,200,30);
       c.add(spLable);
       
       sptf=new JTextField();
       sptf.setFont(f);
       sptf.setBounds(210,240,160,30);
       c.add(sptf);
       
      couLable=new JLabel("Course:");
      couLable.setFont(f);
      couLable.setBounds(50,310,200,30);
      c.add(couLable);
      
      coutf=new JTextField();
      coutf.setFont(f);
      coutf.setBounds(210,310,160,30);
      c.add(coutf);
      
      InLabel=new JLabel("By Miad");
      InLabel.setFont(f);
      InLabel.setBounds(1100,630,100,30);
      InLabel.setForeground(Color.RED);
      c.add(InLabel);
      
      addButton =new JButton("Add");
      addButton.setFont(f);
      addButton.setBounds(40,380,100,25);
      cursor=new Cursor(Cursor.HAND_CURSOR);
      addButton.setCursor(cursor);
      c.add(addButton);
      
      updateButton =new JButton("Update");
      updateButton.setFont(f);
      updateButton.setBounds(165,380,100,25);
      cursor=new Cursor(Cursor.HAND_CURSOR);
      updateButton.setCursor(cursor);
      c.add(updateButton);
      
      deleteButton =new JButton("Delete");
      deleteButton.setFont(f);
      deleteButton.setBounds(295,380,100,25);
      cursor=new Cursor(Cursor.HAND_CURSOR);
      deleteButton.setCursor(cursor);
      c.add(deleteButton);
      
      
      clearButton =new JButton("Clear");
      clearButton.setFont(f);
      clearButton.setBounds(40,420,100,25);
      cursor=new Cursor(Cursor.HAND_CURSOR);
      clearButton.setCursor(cursor);
      c.add(clearButton);
      
      
      table =new JTable();
      
      model=new DefaultTableModel();
      model.setColumnIdentifiers(columns);
      table.setModel(model);
      table.setFont(f);
      table.setSelectionBackground(Color.ORANGE);
      table.setBackground(Color.GREEN);
      table.setRowHeight(30);
      
      scroll=new JScrollPane(table);
      scroll.setBounds(400,80,550,450);
      c.add(scroll);
      
        addButton.addActionListener(this);
        clearButton.addActionListener(this);
        deleteButton.addActionListener(this);
        updateButton.addActionListener(this);
       
        table.addMouseListener(new MouseAdapter(){
            @Override
            public void mouseClicked(MouseEvent  x){
                int numberOfRow= table.getSelectedRow();
                String sID=model.getValueAt(numberOfRow,0 ).toString();
                String sName=model.getValueAt(numberOfRow,1).toString();
                String sPhone=model.getValueAt(numberOfRow,2).toString();
                String Course= model.getValueAt(numberOfRow,3).toString();
                
                
                sitf.setText(sID);
                sntf.setText(sName);
                sptf.setText(sPhone);
                coutf.setText(Course);
                
            }
        });
        
    }
    
        @Override
    public void actionPerformed(ActionEvent e) {
        
        if(e.getSource()==addButton){
            
            
            rows[0]=sitf.getText();
            rows[1]=sntf.getText();
            rows[2]=sptf.getText();
            rows[3]=coutf.getText();
            model.addRow(rows);
        }
       else if(e.getSource()==clearButton){
           sitf.setText("");
           sntf.setText("");
           sptf.setText("");
           coutf.setText("");
           
       }
       else if(e.getSource()==deleteButton){
           int numberofRow=table.getSelectedRow();
           if(numberofRow>=0){
               model.removeRow(numberofRow);
           }
           else{
               JOptionPane.showMessageDialog(null,"No has been selected or no row exit.");
           }
       }
       else if(e.getSource()==updateButton){
           int numberOfRow=table.getSelectedRow();
           
           String  Id= sitf.getText();
           String  Name= sntf.getText();
           String  Phone= sptf.getText();
           String  Course=coutf.getText();
           
           model.setValueAt(Id,numberOfRow,0);
           model.setValueAt(Name,numberOfRow,1);
           model.setValueAt(Phone,numberOfRow,2);
           model.setValueAt(Course,numberOfRow,3);
           
       }
    }
    
    
    
    
    public static void main(String[] args) throws ClassNotFoundException, SQLException {
        StudentTable frame=new StudentTable();
        frame.setVisible(true);
        
        
//         Class.forName("com.mysql.cj.jdbc.Diver");
//        Connection con =DriverManager.getConnection(" jdbc:mysql://localhost:3307/university","root","mababa&&48");
//        PreparedStatement ps=con.prepareStatement("insert into student(Id,name,mobile,course)values(?,?,?,?)");
    
    }

   
}
