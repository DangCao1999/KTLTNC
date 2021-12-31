using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace NguyenVoDangCao
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            SetCulture("en-US");
        }


        private void SetCulture(string culture)
        {
            this.SuspendLayout();
            // Make the CultureInfo.
            CultureInfo culture_info = new CultureInfo(culture);

            Thread.CurrentThread.CurrentCulture = culture_info; // for formatting number, currency, date
            Thread.CurrentThread.CurrentUICulture = culture_info; // for loading user interface

            // Make a ComponentResourceManager.
            ComponentResourceManager component_resource_manager
                = new ComponentResourceManager(this.GetType());

            // Apply resources to the form.
            //component_resource_manager.ApplyResources(this, "$this", culture_info);
            component_resource_manager.ApplyResources(this, "$this");
            // Apply resources to the form's controls.
            foreach (Control ctl in this.Controls)
            {
                //component_resource_manager.ApplyResources(ctl, ctl.Name, culture_info);
                component_resource_manager.ApplyResources(ctl, ctl.Name);
            }

            this.ResumeLayout(false);
            //this.PerformLayout();

            double payment = 123456789.987654;
            textBox1.Text = payment.ToString("N2");
            textBox2.Text = payment.ToString("C2");
            textBox3.Text = DateTime.Today.ToShortDateString();
            textBox4.Text = DateTime.Today.ToLongDateString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            radioButton2.Checked = true;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            radioButton1.Checked = true;
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            SetCulture("en-US");
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            SetCulture("vi-VN");
        }
    }
}
