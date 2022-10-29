import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class BankForm2 extends Applet implements ActionListener
{
	Frame f;
	Label title, name, dob, gender, mobileNo, Address, accountType, aadhar, pan, nationality, status;
	TextField tname,tdob,tmob,taadhar,tpan,tadd;
	Choice accTy,nati;
	CheckboxGroup cgen;
	Button submit;
	public void init()
	{
		f = new Frame("STATE BANK OF INDIA");
		title = new Label("Registration Form");
		name = new Label("Name :");
		dob = new Label("Date Of Birth :");
		gender = new Label("Gender :");
		mobileNo = new Label("Mobile Number :");
		Address = new Label("Address :");
		accountType = new Label("Account Type");
		aadhar = new Label("Aadhar Card Number :");
		pan = new Label("Pan Card Number :");
		nationality = new Label("Nationality:");
		tdob=new TextField();
		tname = new TextField();
		tmob=new TextField();
		taadhar=new TextField();
		tpan=new TextField();
		tadd = new TextField();
		cgen = new CheckboxGroup();
		Checkbox checkBox1 = new Checkbox("Male", cgen, true);
		checkBox1.setBounds(300,100, 100,20);
		Checkbox checkBox2 = new Checkbox("Female", cgen, false);
		checkBox2.setBounds(300,150, 100,20);
		Checkbox checkBox3 = new Checkbox("Other", cgen, false);
		checkBox3.setBounds(300,150, 100,20);
		accTy=new Choice();
		accTy.setBounds(50,700, 75,75);
		accTy.add("Savings");
		accTy.add("Current");
		accTy.add("Demat");
		nati=new Choice();
		nati.add("Indian");
		nati.add("Nepali");
		nati.add("Bhutanese");
		nati.add("Bangladeshi");
		submit=new Button("Submit");
		f.setLayout(new FlowLayout(FlowLayout.LEFT, 20, 25));
		f.add(title);
		f.add(name);
		f.add(tname);
		f.add(dob);
		f.add(tdob);
		f.add(gender);
		f.add(checkBox1);
		f.add(checkBox2);
		f.add(checkBox3);
		f.add(mobileNo);
		f.add(tmob);
		f.add(Address);
		f.add(tadd);
		f.add(accountType);
		f.add(accTy);
		f.add(aadhar);
		f.add(taadhar);
		f.add(pan);
		f.add(tpan);
		f.add(nationality);
		f.add(nati);
		f.add(submit);
		f.add(status);
		submit.addActionListener(this);
	}
	public void actionPerformed(ActionEvent e)
	{
		String s=e.getActionCommand();
		if(s.equals("Submit"))
			status.setText("Your Account Has Been Created!! ");
	}
}
/* <applet code="BankForm.class" width=700 height=700> </applet> */
