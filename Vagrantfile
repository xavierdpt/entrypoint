Vagrant.configure("2") do |config|
  config.vm.box = "bento/ubuntu-19.10"
  config.vm.box_version = "201910.31.0"
  config.vm.synced_folder ".", "/vagrant"
  config.vm.provider "virtualbox" do |v|
    v.gui = true
  end
end
